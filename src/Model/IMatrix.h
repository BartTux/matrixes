#ifndef I_MATRIX_H
#define I_MATRIX_H

#include <iostream>
#include <vector>

namespace Model
{
    ///
    /// Abstract class IMatrix.
    ///
    /// @author BartTux <bartpot98@gmail.com>
    ///
    class IMatrix
    {
      public:
        explicit IMatrix(double a = 0, double b = 0, double c = 0) :
            aNumber(a),
            bNumber(b),
            cNumber(c),
            determinant(0) {};

        virtual void Initialize() = 0;

        virtual void Transpose() {}
        virtual void CalculateDeterminant() {}

        [[nodiscard]] double GetDeterminant();

      private:
        double aNumber;
        double bNumber;
        double cNumber;
        double determinant;
        std::vector<std::vector<double>> elements;
    };
}

#endif /* I_MATRIX_H */
