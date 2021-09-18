#include<stdio.h>
fun(int* a,int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",*(a+i));
}
main()
{
	int n,*a,i;
	scanf("%d",&n);
	a=(int*)calloc(n,4);
	for(i=0;i<n;i++)
    scanf("%d",a+i);
	fun(a,n);
}