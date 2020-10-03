cmake_minimum_required(VERSION 3.17)
project(lab04)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab04 Inheritance.cpp animal.cpp animal.hpp bird.cpp bird.hpp canine.cpp canine.hpp)