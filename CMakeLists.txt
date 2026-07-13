cmake_minimum_required(VERSION 3.16)

project(OddEvenProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(odd_even src/main.cpp)

enable_testing()

add_test(
    NAME EvenNumberTest
    COMMAND odd_even 10
)

set_tests_properties(
    EvenNumberTest
    PROPERTIES PASS_REGULAR_EXPRESSION "10 is an even number."
)

add_test(
    NAME OddNumberTest
    COMMAND odd_even 7
)

set_tests_properties(
    OddNumberTest
    PROPERTIES PASS_REGULAR_EXPRESSION "7 is an odd number."
)