#include<stdio.h>
void fun(int n,int m[n][n])
{
    m[0][0]=2;
}
main()
{
    int m[][3]={{1,2,3},{1,2,3},{1,2,3}};
    m[0][0]=4;
    fun(3,m);
}

