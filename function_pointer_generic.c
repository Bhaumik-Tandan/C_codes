#include<stdio.h>
void fun(int a)
{
    printf("%d",a);
}
void funf(float a)
{
    printf("%f",a);
}
void func(char c)
{
    printf("%c",c);
}
main()
{
    typedef void (* ppt)(void *);
    ppt f[4];
    f[0]=fun;
    f[1]=funf;
    f[0](1);
    f[1](89.98);
    f[2]=func;
    f[2]('9');

}