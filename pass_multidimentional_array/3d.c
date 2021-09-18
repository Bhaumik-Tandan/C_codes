#include<stdio.h>
fun(int*** a,int m,int n,int k)
{
	int i,j,l;
	for(l=0;l<k;l++)
	for(i=0;i<m;i++)
	{
	{
	for(j=0;j<n;j++)
	printf("%d ",*(a[i][j]+l));
	printf("\n");
}
printf("\n");
}
}
main()
{
	int m,n,***a,i,j,k,l;
	scanf("%d %d %d",&k,&m,&n);
	a=(int***)calloc(k,sizeof(int**));
	for(l=0;l<k;l++)
	{
	a[l]=(int**)calloc(m,sizeof(int*));
	for(i=0;i<m;i++)
	{
	a[l][i]=(int*)calloc(n,sizeof(int));
	for(j=0;j<n;j++)	
    scanf("%d",a[i][j]+l);
    }
}
	fun(a,m,n,k);
}