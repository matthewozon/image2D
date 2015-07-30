#include <iostream>
/*#include <vector>
#include <chrono>
#include <math.h>
#include "squareMatrix.h"*/
//30000 -> 32GiB

#include "C_matrix.h"



int main()
{

    C_matrix<double> T(5,3);
    T = 0.0;
    T.show();
    T = T+T;
    return 1;
    /*try
    {
        ThreadPool poolMat(_NB_THREAD_POOL);
        squareMatrix A(10, &poolMat);
        A.show();
        A=5.0;
        A.show();
        squareMatrix B(A);
        B.show();
        squareMatrix C(10, &poolMat);
        C=A+B;
        C.show();
        C=C+1.0;
        C.show();
    }
    catch(char const* a)
    {
        std::cout << a << std::endl;
    }
    return 2;*/
}





