cmake_minimum_required(VERSION 3.13)
project(trabalho_ed2_cplusplus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(trabalho_ed2_cplusplus
        main.cpp MergeSort.cpp MergeSort.h utils.cpp utils.h)
