cmake_minimum_required(VERSION 3.10)

project(WPG VERSION 0.0.1 LANGUAGES CXX)

include_directories(include)

file(GLOB SOURCES
    include/*.hpp
    src/*.cpp
)
add_executable(WPG 
    ${SOURCES}
)