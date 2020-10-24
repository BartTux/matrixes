#include "MatrixA.h"

namespace Model
{
    void IMatrix::Initialize()
    {
        std::cout << std::endl;
    }

    double IMatrix::GetDeterminant()
    {
        if (determinant == 0) {
            CalculateDeterminant();
        }

        return determinant;
    }
}