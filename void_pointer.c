#include<stdio.h>
#include<stdlib.h>
main()
{
    void **p=malloc(sizeof(void*)*10);//hetrogenerous array
    int a=3;
    p[0]=&a;
    char c='2';
    p[1]=&c;
    char str[]="cecf";
    p[2]=str;
    printf("%d %c %s",*(int *)p[0],*(char *)p[1],p[2]);
}