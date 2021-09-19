#include<stdio.h>
void mirror(int **m,int r,int c)
{
	int i,j;
   for(i=0;i<r;i++)
   {
   for(j=c-1;j>=0;j--)
   printf("%d ",m[i][j]);
   printf("\n");
}
}

void main()
{
    int r,c,**m,i,j;
    printf("Enter the number of rows of matrix: ");
    scanf("%d",&r);
    printf("Enter the number of columns of matrix: ");
    scanf("%d",&c);
    m=(int*) calloc(r,sizeof(int));
	for(i=0;i<r;i++)
	{
	m[i]=(int*)calloc(c,sizeof(int));
	for(j=0;j<c;j++)	
    scanf("%d",m[i]+j);
    }
    mirror(m,r,c);
}