#!/bin/bash -e
# Generate and extract the C sources using xed's mbuild system

cd "${0%/*}/.."

get() {
    if [[ -e "$1" ]]; then
        git -C "$1" clean -fxd
        git -C "$1" restore .
        git -C "$1" pull
    else
        git clone https://github.com/intelxed/"$1".git
    fi
}

run_mbuild() {
    get xed
    get mbuild

    mkdir -p tmp
    >tmp/cc.log

    cd xed
    set +e # We expect the build to fail, because our `ar` stub doesn't actually produce any artifacts
    ./mfile.py --cc='flock ../tmp/cc.log sh -c '\''(printf "%s " "$@"; echo) >> ../tmp/cc.log'\' --ar='true'
    set -e
    cd -
}

collect_sources() {
    rm -r c
    mkdir c
    cp -r xed/src c/src
    cp -r xed/obj c/obj
    cp -r xed/include c/include

    for f in xed/datafiles/*/*.c; do
        local d="c/${f#xed/}"
        mkdir -p "${d%/*}"
        cp "$f" "$d"
    done
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
                -o) skip=1;;
                -*) args+=("$x");;
                *) c_files+=("$x");;
            esac
        done
    done <./tmp/cc.log

    printf '%q\n' "${c_files[@]}"
}

run_mbuild
collect_sources
zig run scripts/gen_build.zig
zig fmt build.gen.zig
