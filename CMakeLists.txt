cmake_minimum_required(VERSION 3.17)
project(matrixes)

set(CMAKE_CXX_STANDARD 20)

add_executable(matrixes src/main.cpp src/Model/IMatrix.h src/Model/MatrixA.cpp src/Model/MatrixA.h)