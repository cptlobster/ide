cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(ide)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(ide src/main.cpp)