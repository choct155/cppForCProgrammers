cmake_minimum_required(VERSION 3.13)

# Set Project name and VERSION
project(cppForCProgrammers VERSION 1.0)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
add_executable(CppForCProgrammers ${SOURCES})

set_property(TARGET CppForCProgrammers PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
