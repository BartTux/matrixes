#ifndef MATRIX_B_H
#define MATRIX_B_H

#include "IMatrix.h"

namespace Model
{
    ///
    /// Class MatrixB.
    ///
    /// Class extends interface IMatrix and initializes
    /// or overrides its methods.
    ///
    /// @author BartTux <bartpot98@gmail.com>
    ///
    class MatrixB : public IMatrix
    {
      public:
        MatrixB() = default;
        void Initialize() override;
    };
}

#endif /* MATRIX_B_H */
