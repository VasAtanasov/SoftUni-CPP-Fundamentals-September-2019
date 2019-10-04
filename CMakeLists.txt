cmake_minimum_required(VERSION 3.14)
project(SoftUni_CPP_Fundamentals_September_2019)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set(L02 "02-CPP-Intro/")

add_executable(order-two-numbers.cpp "${L02}order-two-numbers.cpp")
add_executable(product-sign.cpp "${L02}product-sign.cpp")
add_executable(quadratic-equation.cpp "${L02}quadratic-equation.cpp")
add_executable(one-to-n.cpp "${L02}one-to-n.cpp")
add_executable(min-max "${L02}min-max.cpp")
add_executable(gsd "${L02}gsd.cpp")

set(L03 "03-Functions-Arrays-Vetors/")

add_executable(compare-arrays.cpp "${L03}compare-arrays.cpp")
add_executable(above-avarage.cpp "${L03}above-avarage.cpp")
add_executable(cartesian-product.cpp "${L03}cartesian-product.cpp")
add_executable(longest-sequnece.cpp "${L03}longest-sequnece.cpp")
add_executable(most-frequent-number.cpp "${L03}most-frequent-number.cpp")
add_executable(closest-numbers.cpp "${L03}closest-numbers.cpp")

set(L04 "04-Exercises/")

add_executable(operations.cpp "${L04}exercises/operations.cpp")
add_executable(index-of.cpp "${L04}exercises/index-of.cpp")
add_executable(remove.cpp "${L04}exercises/remove.cpp")
add_executable(noise.cpp "${L04}exercises/noise.cpp")

add_executable(pipes.cpp "${L04}JA1/pipes.cpp")
add_executable(modulated-sum.cpp "${L04}JA1/modulated-sum.cpp")
add_executable(bus.cpp "${L04}JA1/bus.cpp")
add_executable(roxettes.cpp "${L04}JA1/roxettes.cpp")
add_executable(roxettes_other.cpp "${L04}JA1/roxettes_other.cpp")

set(L05 "05-String-and-Streams/")

add_executable(compare-arrays-again.cpp "${L05}compare-arrays-again.cpp")
add_executable(mathematical-expression.cpp "${L05}mathematical-expression.cpp")
add_executable(title-case.cpp "${L05}title-case.cpp")
add_executable(replace-all.cpp "${L05}replace-all.cpp")
add_executable(invalid-input.cpp "${L05}invalid-input.cpp")
add_executable(the-signal-and-the-noise.cpp "${L05}the-signal-and-the-noise.cpp")
add_executable(the-noise-and-the-signal.cpp "${L05}the-noise-and-the-signal.cpp")
