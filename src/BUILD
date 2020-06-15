package(default_visibility = ["//visibility:public"])

py_binary(
    name = "generate_reg_def",
    srcs = ["generate_reg_def.py"],
)

filegroup(
    name = "linker_script",
    srcs = ["linker_script.ld"],
)

cc_binary(
    name = "faos",
    srcs = ["main.c"],
    deps = [
        ":assert",
        "//src/autogen:registers",
        ":clock",
        ":ddr3",
        ":gpio",
        ":i2c",
        "linker_script.ld",
        ":tps65217",
        ":uart",
    ],
    linkopts = [
        "-T",
        "$(rootpath linker_script.ld)"
    ],
)

cc_library(
    name = "startup",
    srcs = ["startup.s"],
)

cc_library(
    name = "assert",
    hdrs = ["assert.h"],
)

cc_library(
    name = "clock",
    srcs = ["clock.c"],
    hdrs = ["clock.h"],
    deps = [
        ":assert",
        "//src/autogen:registers",
    ],
)

cc_library(
    name = "ddr3",
    srcs = ["ddr3.c"],
    hdrs = ["ddr3.h"],
    deps = [
        ":clock",
        "//src/autogen:registers",
    ],
)

cc_library(
    name = "gpio",
    srcs = ["gpio.c"],
    hdrs = ["gpio.h"],
    deps = [
        ":assert",
        "//src/autogen:registers",
    ],
)

cc_library(
    name = "i2c",
    srcs = ["i2c.c"],
    hdrs = ["i2c.h"],
    deps = [
        ":assert",
        ":clock",
        "//src/autogen:registers",
    ],
)

cc_library(
    name = "tps65217",
    srcs = ["tps65217.c"],
    hdrs = ["tps65217.h"],
    deps = [
        ":assert",
        ":i2c",
    ],
)

cc_library(
    name = "uart",
    srcs = ["uart.c"],
    hdrs = ["uart.h"],
    deps = [
        ":assert",
        ":clock",
        "//src/autogen:registers",
    ],
)
