cmake_minimum_required(VERSION 3.17)
project(csis_123a_overloading_example)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        csis_123a_overloading_example
        main.cpp
        integer.cpp integer.h)

add_executable(
        bag_class
        bag_class.cpp
)