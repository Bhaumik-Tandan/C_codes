#include "co_factor_.h"
#include "transpose.h"
void aug(int n,int m[n][n],int a[n][n])
{
    int c[n][n];//find cofactor
    cofactor(n,m,c);
    transpose(n,c,a);//find transpose
}