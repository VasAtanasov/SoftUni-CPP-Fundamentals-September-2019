cmake_minimum_required(VERSION 3.14)
project(above_avarage)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src)

add_executable(above_avarage
        src/above-avarage.cpp)
