cmake_minimum_required(VERSION 3.15)
project(SoftUni_CPP_Fundamentals_September_2019)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(L02 "02-CPP-Intro/")

add_executable(L02_T01.order-two-numbers.cpp "${L02}order-two-numbers.cpp")
add_executable(L02_T02.product-sign.cpp "${L02}product-sign.cpp")
add_executable(L02_T03.quadratic-equation.cpp "${L02}quadratic-equation.cpp")
add_executable(L02_T04.one-to-n.cpp "${L02}one-to-n.cpp")
add_executable(L02_T05.min-max "${L02}min-max.cpp")
add_executable(L02_T06.gsd "${L02}gsd.cpp")
