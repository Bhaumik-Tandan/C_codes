#include<stdio.h>
#include<stdlib.h>
char *a;
void fun()
{
    char *s=malloc(sizeof(char)*10);
    s="Sdff";
    a=s;
}
main()
{
    fun();
    printf("%s",a);
}