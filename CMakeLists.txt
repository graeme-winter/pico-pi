cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_SDK_PATH "/home/pi/C/pico/pico-sdk")

include(pico_sdk_import.cmake)

project(pi C CXX ASM)

pico_sdk_init()

add_executable(pi pi.c)

pico_set_program_name(pi "pi")
pico_set_program_version(pi "0.1")
pico_enable_stdio_uart(pi 0)
pico_enable_stdio_usb(pi 1)

target_link_libraries(pi pico_stdlib)

pico_add_extra_outputs(pi)

