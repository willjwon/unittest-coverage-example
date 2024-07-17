# CMake Requirement
cmake_minimum_required(VERSION 3.25)

# C++ requirement
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the build type to Release if not specified
set(CMAKE_BUILD_TYPE Debug)

# Setup project
project(test)

add_executable(test main.cpp)
set_target_properties(test
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin/
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib/
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib/
    COMPILE_WARNING_AS_ERROR ON
)

# Include directories
target_include_directories(test PRIVATE .)

