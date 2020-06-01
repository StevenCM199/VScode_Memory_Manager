cmake_minimum_required(VERSION 3.16)
project(proyecto1)

set(CMAKE_CXX_STANDARD 20)


add_executable(proyecto1 calc.cpp calc.h tests/test.cpp)