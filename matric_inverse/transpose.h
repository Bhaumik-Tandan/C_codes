#pragma once
void transpose(int n,int m[n][n],int c[n][n])
{
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    c[i][j]=m[j][i];
}