#include<stdio.h>
#include<stdlib.h>
void fun(void* s)
{
    int f=atoi(s);
    printf("%d",f);
}
main()
{
    fun("45");

}