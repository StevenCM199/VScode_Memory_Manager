cmake_minimum_required(VERSION 3.16)
project(proyecto1)

set(CMAKE_CXX_STANDARD 20)


add_executable(proyecto1 VSPtr.cpp VSPtr.h tests/test.cpp "Garbage Collector/GCPtr.cpp" "Garbage Collector/GCPtr.h" "Garbage Collector/LinkedListGC.cpp" "Garbage Collector/LinkedListGC.h" server/Server.cpp server/Server.h)