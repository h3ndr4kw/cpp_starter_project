cmake_minimum_required(VERSION 3.18)

if (MSVC)
    add_compile_option(/W4)
else()
    add_compile_option(-Wall -Wextra -Wpedantic)
endif()

add_executable(intro main.cpp)

target_compile_features(intro PRIVATE cx_lambda_init_captures)