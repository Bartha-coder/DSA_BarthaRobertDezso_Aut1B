cmake_minimum_required(VERSION 3.17)
project(forditott_sorrend C)

set(CMAKE_C_STANDARD 99)

add_executable(forditott_sorrend main.c forditott_tomb.c forditott_tomb.h)