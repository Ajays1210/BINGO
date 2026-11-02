cmake_minimum_required(VERSION 3.16)

project(BINGO)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bingo 
    main.cpp
common/Game.cpp
)
