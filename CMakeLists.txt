cmake_minimum_required(VERSION 3.24)
project(ManningCppCourse)

set(CMAKE_CXX_STANDARD 17)

add_executable(ManningCppCourse TierOne/firstProgram.cpp TierOne/arrays.cpp main.cpp TierOne/tierOne.h commonHeaders.h TierOne/input.cpp TierOne/excercises.cpp TierTwo/tierTwo.h TierTwo/functions.cpp TierTwo/excercise.cpp TierThree/tierThree.h TierThree/booleans.cpp TierThree/excercises.cpp)
