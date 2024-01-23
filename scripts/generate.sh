#!/bin/bash -e
# Generate and extract the C sources using xed's mbuild system

cd "${0%/*}/.."

get() {
    if [[ -e "$1" ]]; then
        echo "Updating $1..."
        git -C "$1" clean -fxd
        git -C "$1" restore .
        git -C "$1" pull
    else
        echo "Fetching $1..."
        git clone https://github.com/intelxed/"$1".git
    fi
}

stub() {
    echo "flock $1 sh -c '"'(printf "%s " "$@"; echo)'" >>$1' --"
}
run_mbuild() {
    get xed
    get mbuild

    rm -rf tmp
    mkdir tmp
    : >tmp/cc.log
    : >tmp/ar.log

    cd xed
    set +e # We expect the build to fail, because our `ar` stub doesn't actually produce any artifacts
    ./mfile.py --cc="$(stub ../tmp/cc.log)" --ar="$(stub ../tmp/ar.log)"
    set -e
    cd -
}

collect_sources() {
    rm -r c
    mkdir c
    cp -r xed/src c/src
    cp -r xed/include c/include

    for f in xed/datafiles/*/*.c; do
        local d="c/${f#xed/}"
        mkdir -p "${d%/*}"
        cp "$f" "$d"
    done

    mkdir c/obj
    cp -r xed/obj/*.c c/obj/
    cp -r xed/obj/include-private c/obj/

    mkdir c/obj/include-public
    cp xed/obj/*.h c/obj/include-public/
}

gen_build() {
    # Generate build script
    while read -ra args; do
        local skip=
        for x in "${args[@]}"; do
            if [[ -n "$skip" ]]; then
                skip=
                continue
            fi
            case "$x" in
            -o) skip=1 ;;
            -*) args+=("$x") ;;
            *) c_files+=("$x") ;;
            esac
        done
    done <./tmp/cc.log

    printf '%q\n' "${c_files[@]}"
}

run_mbuild
collect_sources
zig run scripts/gen_build.zig
zig fmt build.gen.zig
