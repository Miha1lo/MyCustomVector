cmake_minimum_required(VERSION 3.10)
project(MyCustomVector)

set(CMAKE_CXX_STANDARD 11)
include_directories(src)
add_executable(MyCustomVector
    src/Main.cpp
    src/MyVector.h
)
