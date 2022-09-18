cmake_minimum_required(VERSION 3.22)  # CMake version check
project(simple_read_csv)              # Creo el proyyecto "simple_read_csv"
set(CMAKE_CXX_STANDARD 14)            # Habilito el estándar C++14

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(read_csv ${SOURCE_FILES})
