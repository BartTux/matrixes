#include "IMatrix.h"

namespace Model
{
    void IMatrix::CalculateDeterminant()
    {
        //TODO: write code which calculate determinant
        // from given matrix elements
    }

    void IMatrix::Transpose()
    {
        //TODO: implement method that transposing matrix
    }

    double IMatrix::GetDeterminant()
    {
        if (determinant == 0) {
            CalculateDeterminant();
        }

        return determinant;
    }

}