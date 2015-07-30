#include "threadOperations.h"

void threadOperations::assignMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double x, double** output)
{
    long int l, c;
    if(idxEnd>=(_Nl*_Nc)) idxEnd=_Nl*_Nc-1;
    for(long int i=idxStart ; i<=idxEnd ; i++)
    {
        //i = l + c*Nl;
        c = (long int) floor( ((double) i)/((double) _Nl));
        l = i - c*_Nl;
        output[l][c] = x;
    }
    return ;
}
void threadOperations::assignMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double** input, double** output)
{
    long int l, c;
    if(idxEnd>=(_Nl*_Nc)) idxEnd=_Nl*_Nc-1;
    for(long int i=idxStart ; i<=idxEnd ; i++)
    {
        //i = l + c*Nl;
        c = (long int) floor( ((double) i)/((double) _Nl));
        l = i - c*_Nl;
        output[l][c] = input[l][c];
    }
    return ;
}
void threadOperations::addMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double x, double** _M, double** retM)
{
    long int l, c;
    if(idxEnd>=(_Nl*_Nc)) idxEnd=_Nl*_Nc-1;
    for(long int i=idxStart ; i<=idxEnd ; i++)
    {
        //i = l + c*N;
        c = (long int) floor( ((double) i)/((double) _Nl));
        l = i - c*_Nl;
        retM[l][c] = _M[l][c] + x;
    }
    return ;
}

void threadOperations::addMatrix(long int idxStart,long int idxEnd, long int _Nl, long int _Nc, double** input1, double** input2, double** output)
{
    long int l, c;
    if(idxEnd>=(_Nl*_Nc)) idxEnd=_Nl*_Nc-1;
    for(long int i=idxStart ; i<=idxEnd ; i++)
    {
        //i = l + c*N;
        c = (long int) floor( ((double) i)/((double) _Nl));
        l = i - c*_Nl;
        output[l][c] = input1[l][c] + input2[l][c];
    }
    return ;
}
