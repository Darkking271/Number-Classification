cmake_minimum_required(VERSION 3.7)
project(Number_Classification)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c type_check.c type_check.h)
add_executable(Number_Classification ${SOURCE_FILES} type_check.c type_check.h)
add_executable(main main.c type_check.c type_check.h)