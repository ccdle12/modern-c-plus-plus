cmake_minimum_required(VERSION 3.1) # Minimum Version on CMAKE
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-std=c++11")
project(weather)

add_executable(
    main 
    main.cpp
    tools.cpp
)
