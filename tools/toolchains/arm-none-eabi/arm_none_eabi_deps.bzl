load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def arm_none_eabi_deps():
    http_archive(
        name = "arm_none_eabi",
        build_file = "//tools/toolchains/arm-none-eabi:compiler.BUILD",
        sha256 = "ac952d89ae0fc3543e81099e7d34917efc621f5def112eee843fd1ce755eca8c",
        strip_prefix = "gcc-arm-9.2-2019.12-x86_64-arm-none-eabi",
        url = "https://developer.arm.com/-/media/Files/downloads/gnu-a/9.2-2019.12/binrel/gcc-arm-9.2-2019.12-x86_64-arm-none-eabi.tar.xz?revision=64186c5d-b471-4c97-a8f5-b1b300d6594a&la=en&hash=5E9204DA5AF0B055B5B0F50C53E185FAA10FF625",
    )
