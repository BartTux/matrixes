cmake_minimum_required(VERSION 3.17)
project(zad_macierze)

set(CMAKE_CXX_STANDARD 20)

add_executable(zad_macierze src/main.cpp src/Model/IMatrix.h src/Model/MatrixA.cpp src/Model/MatrixA.h)