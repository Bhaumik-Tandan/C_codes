#include<stdio.h>
#include<stdlib.h>
void fun()
{
    printf("\n\n1)Enter Again\n2)Exit\nEnter your choice: ");
    int c;
    scanf("%d",&c);
    if(c==1)
    main();
    else
    exit(0);
}
main()
{
    int*** m;//stores both the matrix;
    m=malloc(sizeof(int**)*2);
    int r[2],c[2];
    for(int i=0;i<2;i++){
    printf("\nEnter the number of rows in matrix %d: ",i+1);
    scanf("%d",r+i);
    printf("\nEnter the number of collumns in matrix %d: ",i+1);
    scanf("%d",c+i);
    }
    if(r[1]!=c[0])
    {
        printf("\nWrong matrix shape");
        fun();
    }
    for(int i=0;i<2;i++){
        m[i]=malloc(sizeof(int*)*r[i]);
    for(int j=0;j<r[i];j++){
    m[i][j]=malloc(sizeof(int)*c[i]);
    printf("\nEnter space seperated row %d of matrix %d: ",j+1,i+1);
    for(int k=0;k<c[i];k++)
    scanf("%d",&m[i][j][k]);
    }
    }
    printf("\nThe result matrix is:-\n\n");
    for(int i=0;i<r[0];i++)
    {
        for(int k=0;k<c[1];k++){
            int s=0;
        for(int j=0;j<r[1];j++)
            s+=m[0][i][j]*m[1][j][k];
        printf("\t%d",s);
        }
        printf("\n");
    }
    fun();
}