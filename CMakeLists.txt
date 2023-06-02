cmake_minimum_required(VERSION 3.24)
project(C_lib C)

set(CMAKE_C_STANDARD 11)

add_executable(C_lib main.c queue/queue.c queue/queue.h fruit.c fruit.h fruit.h fruit.h)
