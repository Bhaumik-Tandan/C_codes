#include<stdio.h>
#include<stdlib.h>

main()
{
    int** m;//stores the matrix;
    int r,c,s;
    printf("\nEnter the number of rows in matrix: ");
    scanf("%d",&r);
    printf("\nEnter the number of collumns in matrix: ");
    scanf("%d",&c);
    m=malloc(sizeof(int*)*r);
    for(int j=0;j<r;j++){
    m[j]=malloc(sizeof(int)*c);
    printf("\nEnter space seperated row %d of matrix: ",j+1);
    for(int k=0;k<c;k++)
    {
    scanf("%d",&m[j][k]);
    s+=m[j][k];
    }
    }
    printf("Sum of matrix=%d",s);

    
}