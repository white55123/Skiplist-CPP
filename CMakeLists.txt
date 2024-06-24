cmake_minimum_required(VERSION 3.10)
project(SkipList VERSION 1.0 DESCRIPTION "Skip List implementation")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(SkipList main.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


