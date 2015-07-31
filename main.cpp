#include <iostream>
/*#include <vector>
#include <chrono>
#include <math.h>
#include "squareMatrix.h"*/
//30000 -> 32GiB

#include "C_matrix.h"

#include "ThreadPool.h"

#include <ctime>



int main(int argc, char* argv[])
{
    long int NB_JOB = atoi(argv[1]);
    std::cout << NB_JOB << std::endl;
    ThreadPool poolMat(12);

    long int N = 1000000000;
    
    double* A = new double[N];
    std::clock_t    start;
    start = std::clock();

    double x=1.0;
    long int idxStart, idxEnd;
    std::vector< std::future<void> > results;
    for(long int i = 0; i < NB_JOB; ++i) 
    {
        //determine on which segment the operation will be run
        idxStart = (i*N)/NB_JOB;
        idxEnd = ((i+1)*N)/NB_JOB -1;
        //tell thread to work
        results.emplace_back(
            poolMat.enqueue( [idxStart, idxEnd, A, x] {
                for(long int n=idxStart ; n<=idxEnd ; n++)
                {
                    //A[n] = x;
                }
                return;
            })
        );
    }
    for(auto && result: results) result.get();

    std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 6;
    // C_matrix<double> T((long int) 1,(long int) 1000000000, &poolMat,(long int) atoi(argv[1]));

    // std::clock_t    start;
    // start = std::clock();
    // T = 1.0;
    // std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    // //T.show();
    // T= T+1.0;
    // std::cout << "Time: " << (std::clock() - start) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    // //T.show();
    // return 1;
    // T = T+T;
    // //T.show();
    // T = T-1.0;
    // //T.show();
    // T=T-T;
    // //T.show();
    // return 1;
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





