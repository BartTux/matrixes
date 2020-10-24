#include <iostream>
#include <vector>

#include "Model/IMatrix.h"
#include "Model/MatrixA.h"

using Model::MatrixA;

int main()
{
    double a = 5;
    double b = 6;
    double c = 3;
    MatrixA matrixA;

    std::vector<std::vector<double>> A = {
        {a, (a + b), (b + c)},
        {(c - a), b, (a - c)},
        {(b - c), a, c}
    };

    std::vector<std::vector<double>> B = {
        {c, (c - a), b},
        {(b + c), (a + b), a},
        {a, (a - c), c}
    };

    for (const auto& vec : A) {
        for (const auto& vec2 : vec) {
            std::cout << vec2 << "  ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (const auto& vec : B) {
        for (const auto& vec2 : vec) {
            std::cout << vec2 << "  ";
        }
        std::cout << std::endl;
    }

    return 0;
}
