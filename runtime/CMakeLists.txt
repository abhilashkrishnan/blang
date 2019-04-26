cmake_minimum_required(VERSION 3.13)
project(blazevm)

set(CMAKE_CXX_STANDARD 17)

add_executable(blazevm vm.cpp BlazeClass.cpp BlazeClass.h types.h constants.h ClassHeap.cpp ClassHeap.h ObjectHeap.cpp ObjectHeap.h FilePathManager.cpp FilePathManager.h)