#include "MatrixA.h"

namespace Model
{
    void MatrixA::Initialize()
    {
        elements = {
            {aNumber, (aNumber + bNumber), (bNumber + cNumber)},
            {(cNumber - aNumber), bNumber, (aNumber - cNumber)},
            {(bNumber - cNumber), aNumber, cNumber}
        };
    }
}