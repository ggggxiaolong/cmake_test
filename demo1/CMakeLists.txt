cmake_minimum_required(VERSION 3.0.0)
project(demo1 VERSION 0.1.0)

add_executable(demo1 main.c)
target_link_libraries(demo1 m)