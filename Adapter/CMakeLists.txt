cmake_minimum_required(VERSION 3.17)
project(designPatterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(designPatterns main.cpp RoundHole.cpp RoundHole.h RoundPeg.cpp RoundPeg.h SquarePeg.cpp SquarePeg.h SquarePegAdapter.cpp SquarePegAdapter.h)