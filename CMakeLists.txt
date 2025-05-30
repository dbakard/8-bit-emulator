cmake_minimum_required(VERSION 3.28)
project(8_bit_emulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# src 
add_executable(8_bit
	src/main.cpp
)

# for .h files
target_include_directories(8_bit PRIVATE include)
