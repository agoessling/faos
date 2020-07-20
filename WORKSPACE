workspace(name = 'faos')

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

load("//tools/toolchains/arm-none-eabi:arm_none_eabi_deps.bzl", "arm_none_eabi_deps")

arm_none_eabi_deps()

register_toolchains(
    "//tools/toolchains:arm_none_eabi",
)

http_archive(
    name = "unity",
    build_file = "//tools:unity.BUILD",
    sha256 = "af00e4ecfcb7546cc8e6d39fe3770fa100b19e59ff63f7b6dcbd3010eac9f35f",
    strip_prefix = "Unity-2.5.1",
    url = "https://github.com/ThrowTheSwitch/Unity/archive/v2.5.1.zip",
)
