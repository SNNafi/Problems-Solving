cmake_minimum_required(VERSION 3.17)
project(ProblemsSolving)

set(CMAKE_CXX_STANDARD 11)

add_executable(ProblemsSolving main.cpp)
add_executable(AddTwoNumbers LeetCode/AddTwoNumbers/CPP/AddTwoNumbers.cpp)
add_executable(16bitswonly DMOJ/16bitswonly/16bitswonly.cpp)
add_executable(a1 DMOJ/a1/a1.cpp)