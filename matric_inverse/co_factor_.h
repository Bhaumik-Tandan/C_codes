#include "matrix_det.h"//minor is imported in this
void cofactor(int n,int m[n][n],int c[n][n])//c is the matrix to store cofactor
{
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        int mi[n-1][n-1];
        minor_mat(n,m,mi,i+1,j+1);
        c[i][j]=det(n-1,mi)*(1+((i+j)%2==0)*(-2));
    }
}