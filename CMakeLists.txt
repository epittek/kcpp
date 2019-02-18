cmake_minimum_required(VERSION 2.8)
project(CBM_seminar)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0 -Wunused-variable")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O0 -Wunused-variable")

add_executable(start introduction/start.cc)
#add_executable(lsizeof src/LSizeof.cc)
#add_executable(lstatic src/LStatic.cc)
#add_executable(lstaticCast src/LStaticCast.cc)

file(GLOB_RECURSE APP_SOURCES src/*.cc)
foreach (sourcefile ${APP_SOURCES})
    #get filename without extension (NAME_(W)ethout(E)xtenction)
    get_filename_component(filename ${sourcefile} NAME_WE)
    #add executable for all file
    add_executable(${filename} ${sourcefile})
endforeach (sourcefile ${APP_SOURCES})

