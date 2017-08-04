cmake_minimum_required(VERSION 3.5)
project(Root_Finding)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS -O2)

set(SOURCE_FILES main.c
  funcdef.h
  const.h
  solve-methods.h
  bisection.c
  secant.c
  newton-raphson.c
  type.h)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} m)
