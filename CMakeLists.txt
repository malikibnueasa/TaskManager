cmake_minimum_required(VERSION 3.10)

project(TaskManager)

add_library(TaskManager STATIC
    src/add.cpp
    src/subtract.cpp
)

target_include_directories(TaskManager PUBLIC include)
