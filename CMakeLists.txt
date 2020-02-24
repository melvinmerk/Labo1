cmake_minimum_required(VERSION 3.15)
project(Labo1)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wconversion -Wextra -pedantic")

add_executable(Labo1 main.cpp Couleur.cpp Cercle.cpp Carre.cpp Rectangle.cpp Triangle.cpp)