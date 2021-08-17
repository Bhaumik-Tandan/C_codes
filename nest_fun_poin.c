#include<stdio.h>
void (*f)();
void fun()
{
    void f1()
    {
        printf("sdf");
    }
    f=f1;
}
main()
{
    fun();
    f();
}