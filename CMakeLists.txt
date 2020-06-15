cmake_minimum_required(VERSION 3.16)
project(proyecto1)

set(CMAKE_CXX_STANDARD 20)


add_executable(proyecto1 vsptr/VSPtr.cpp vsptr/VSPtr.h tests/test.cpp "Garbage Collector/GCPtr.cpp" "Garbage Collector/GCPtr.h" "Garbage Collector/LinkedListGC.cpp" "Garbage Collector/LinkedListGC.h" server/Server.cpp server/Server.h client/Client.cpp client/Client.h client/ClientManagerJSON.cpp client/ClientManagerJSON.h server/ServerManagerJSON.cpp server/ServerManagerJSON.h MemoryManager.cpp MemoryManager.h Connection.cpp Connection.h main.cpp)