#include<stdio.h>
#include "matrix_inv.h"
#include "matrix_print.h"
main()
{
    int r;
    printf("\nEnter the number of rows: ");
    scanf("%d",&r);
    int m[r][r];
    for(int j=0;j<r;j++){
    printf("\nEnter space seperated row %d: ",j+1);
    for(int i=0;i<r;i++)
    scanf("%d",&m[j][i]);
    }
    float c[r][r];
    inv(r,m,c);
    printff(r,c);
}
