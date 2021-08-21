#include "mat.minor.h"
int det(int n,int m[n][n])//m matrix cofactor pointer //r row no. c collumn no.
{
    if(n==1)
    return m[0][0];
    int d=0;
    for(int i=0;i<n;i++)
    {
        int c[n-1][n-1];
        minor_mat(n,m,c,1,i+1);//expanding along row 1;//minor takes index starting 1
        d+=det(n-1,c)*(1+(i%2==0)*(-2))*m[0][i];
    }
    return d;
}