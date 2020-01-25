cmake_minimum_required(VERSION 3.16)

project(cppForCProgrammers)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(cppForCProgrammers ${SOURCES})