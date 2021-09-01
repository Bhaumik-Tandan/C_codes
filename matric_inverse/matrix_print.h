#pragma once
void printff(int n,float m[n][n])
{
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    printf("\t%f",m[i][j]);
    printf("\n");
    }
}

void printfi(int n,int m[n][n])
{
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    printf("\t%d",m[i][j]);
    printf("\n");
    }
}
#define print(a,b) _Generic((b), int(*)[]: printfi, float(*)[]: printff)((a), (b))
