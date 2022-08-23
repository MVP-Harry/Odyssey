# Basic settings
cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(Odyssey VERSION 1.0)

# Set source files for building the executable odyssey
# Attach additional file names for building in the parenthesis
# - MVP_Harry 2022-08-22
set(SOURCE_FILES src/main.cpp)

# Adding the executable odyssey
# - MVP_Harry 2022-08-22
add_executable(odyssey ${SOURCE_FILES})

target_include_directories(odyssey PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(odyssey PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/libchess/libchess.a)
