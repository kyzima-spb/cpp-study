cmake_minimum_required(VERSION 3.7)
project(first_step)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp section3_tasks.cpp demo_reload.cpp on_start.cpp section4.cpp)
add_executable(first_step ${SOURCE_FILES})