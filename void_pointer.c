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
    float f=34.4;
    p[3]=&f;
    printf("%d %c %s %f\n",*(int *)p[0],*(char *)p[1],p[2],*(float *)p[3]);
    void *d=3.4;
    printf("%f",(float*)d);
}