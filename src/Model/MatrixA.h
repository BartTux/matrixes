#ifndef MATRIX_A_H
#define MATRIX_A_H

#include "IMatrix.h"

namespace Model
{
    ///
    /// Class MatrixA.
    ///
    /// @author BartTux <bartpot98@gmail.com>
    ///
    class MatrixA : public IMatrix
    {
      public:
        MatrixA() = default;
        void Initialize() override {}
    };
}

#endif /* MATRIX_A_H */
