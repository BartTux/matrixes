#include "MatrixB.h"

namespace Model
{
    void MatrixB::Initialize()
    {
        elements = {
            {cNumber, (cNumber - aNumber), bNumber},
            {(bNumber + cNumber), (aNumber + bNumber), aNumber},
            {aNumber, (aNumber - cNumber), cNumber}
        };
    }
}