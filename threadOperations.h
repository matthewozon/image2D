#ifndef THREAD_OPERATIONS_H
#define THREAD_OPERATIONS_H

#include <math.h>

class threadOperations
{
public:
    threadOperations(){};
    void assignMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double x, double** output);
    void assignMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double** input, double** output);
    void addMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double x, double** _M, double** retM);
    void addMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double** input1, double** input2, double** output);
};

#endif
