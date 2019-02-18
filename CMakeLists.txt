cmake_minimum_required(VERSION 2.8)
project(CBM_seminar)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O0")

add_executable(start introduction/start.cc)

