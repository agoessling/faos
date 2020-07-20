load("@rules_cc//cc:defs.bzl", "cc_toolchain")
load("//tools/toolchains:toolchains.bzl", "cc_x86_64_linux_gnu_config")

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "all_files",
    srcs = [
        ":ar_files",
        ":as_files",
        ":compiler_files",
        ":coverage_files",
        ":linker_files",
        ":objcopy_files",
        ":strip_files",
        "@x86_64_linux_gnu//:compiler_pieces",
    ],
)

filegroup(
    name = "ar_files",
    srcs = [
        "x86_64-linux-gnu-ar",
        "@x86_64_linux_gnu//:ar",
    ],
)

filegroup(
    name = "as_files",
    srcs = [
        "x86_64-linux-gnu-as",
        "@x86_64_linux_gnu//:as",
    ],
)

filegroup(
    name = "compiler_files",
    srcs = [
        "x86_64-linux-gnu-cpp",
        "x86_64-linux-gnu-gcc",
        "@x86_64_linux_gnu//:cpp",
        "@x86_64_linux_gnu//:compiler_pieces",
        "@x86_64_linux_gnu//:gcc",
    ],
)

filegroup(
    name = "coverage_files",
    srcs = [
        "x86_64-linux-gnu-gcov",
        "@x86_64_linux_gnu//:gcov",
    ],
)

filegroup(
    name = "linker_files",
    srcs = [
        "x86_64-linux-gnu-ar",
        "x86_64-linux-gnu-gcc",
        "x86_64-linux-gnu-ld",
        "@x86_64_linux_gnu//:ar",
        "@x86_64_linux_gnu//:compiler_pieces",
        "@x86_64_linux_gnu//:gcc",
        "@x86_64_linux_gnu//:ld",
    ],
)

filegroup(
    name = "objcopy_files",
    srcs = [
        "x86_64-linux-gnu-objcopy",
        "@x86_64_linux_gnu//:objcopy",
    ],
)

filegroup(
    name = "strip_files",
    srcs = [
        "x86_64-linux-gnu-strip",
        "@x86_64_linux_gnu//:strip",
    ],
)

cc_x86_64_linux_gnu_config(
    name = "config",
    toolchain_identifier = "x86_64-linux-gnu",
    host_system_name = "x86_64-linux",
    target_libc = "glibc-2.30",
    compiler = "gcc-9.3.0",
)
