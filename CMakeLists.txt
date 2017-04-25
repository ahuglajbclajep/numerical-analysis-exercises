cmake_minimum_required(VERSION 3.7)
project(RootFinding)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c funcdef.h bisection.h newton-raphson.h)
add_executable(RootFinding ${SOURCE_FILES})
