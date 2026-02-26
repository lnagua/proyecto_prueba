cmake_minimum_required(VERSION 4.1)
project(practica_2_v2)

set(CMAKE_CXX_STANDARD 11)

add_executable(practica_2_v2 main.cpp
        point.h
        point.cpp)

add_executable(practica main2.cpp
        persona.cpp
        persona.h
        test/casa.cpp
        test/casa.h)
