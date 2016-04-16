cmake_minimum_required(VERSION 2.6)

SET(EXTRA_CXX_COMPILE_FLAGS "-std=c++11 -pedantic -Werror -Wall")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${EXTRA_CXX_COMPILE_FLAGS}")

add_executable(parse-stl main.cpp parse_stl.cpp)
