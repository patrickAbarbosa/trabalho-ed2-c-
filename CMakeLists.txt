cmake_minimum_required(VERSION 3.13)
project(trabalho_ed2_cplusplus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(trabalho_ed2_cplusplus main.cpp
        src/Class/QuickSort.cpp src/Header/QuickSort.h
        src/Class/Heapsort.cpp src/Header/Heapsort.h
        src/Class/MergeSort.cpp src/Header/MergeSort.h
        src/Class/Rating.cpp src/Header/Rating.h
        src/Class/utils.cpp src/Header/utils.h)
