#include "augmented_matrix.h"
void inv(int n,int m[n][n],float inv[n][n])
{
    int a[n][n];
    aug(n,m,a);
    int d=det(n,m);
    if(d==0){
    printf("\nMatrix is not invertible");
    exit(0);
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    inv[i][j]=a[i][j]/(d*1.0);
}
