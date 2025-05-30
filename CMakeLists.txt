cmake_minimum_required(VERSION 3.28)
project(chip8_emulator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# finds SDL2
find_package(SDL2 REQUIRED)

# src 
add_executable(chip8
	src/main.cpp
)

# for .h files
target_include_directories(chip8 
	PRIVATE 
		include
		${SDL2_INCLUDE_DIRS}
)

# linking SDL2
target_link_libraries(chip8
	PRIVATE
		SDL2::SDL2
)
