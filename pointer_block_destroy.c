#include<stdio.h>
int *ar[10];
void func()
{
    int a,*p;
    a=10;
    p=&a;
    ar[0]=p;
}
main()
{
    func();
    printf("%d",*ar[0]);  
}
