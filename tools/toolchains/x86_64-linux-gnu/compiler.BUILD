package(default_visibility = ['//visibility:public'])

filegroup(
    name = "ar",
    srcs = ["bin/x86_64-linux-ar"],
)

filegroup(
    name = "as",
    srcs = ["bin/x86_64-linux-as"],
)

filegroup(
    name = "cpp",
    srcs = ["bin/x86_64-linux-cpp"],
)

filegroup(
    name = "gcc",
    srcs = ["bin/x86_64-linux-gcc"],
)

filegroup(
    name = "gcov",
    srcs = ["bin/x86_64-linux-gcov"],
)

filegroup(
    name = "ld",
    srcs = ["bin/x86_64-linux-ld"],
)

filegroup(
    name = "nm",
    srcs = ["bin/x86_64-linux-nm"],
)

filegroup(
    name = "objcopy",
    srcs = ["bin/x86_64-linux-objcopy"],
)

filegroup(
    name = "objdump",
    srcs = ["bin/x86_64-linux-objdump"],
)

filegroup(
    name = "strip",
    srcs = ["bin/x86_64-linux-strip"],
)

filegroup(
    name = "compiler_pieces",
    srcs = glob([
        "x86_64-buildroot-linux-gnu/**",
        "lib/gcc/x86_64-buildroot-linux-gnu/**",
    ]),
)

filegroup(
    name = "compiler_components",
    srcs = [
        ":ar",
        ":as",
        ":cpp",
        ":gcc",
        ":gcov",
        ":ld",
        ":nm",
        ":objcopy",
        ":objdump",
        ":strip",
    ],
)
