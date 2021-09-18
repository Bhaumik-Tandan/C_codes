#include<stdio.h>
fun(int** a,int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	printf("%d ",*(a[i]+j));
	printf("\n");
}
}
main()
{
	int m,n,**a,i,j;
	scanf("%d %d",&m,&n);
	a=(int**)calloc(m,sizeof(int*));
	for(i=0;i<m;i++)
	{
	a[i]=(int*)calloc(n,sizeof(4));
	for(j=0;j<n;j++)	
    scanf("%d",a[i]+j);
    }
	fun(a,m,n);
}