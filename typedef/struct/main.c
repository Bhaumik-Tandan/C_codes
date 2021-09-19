#include<stdio.h>
struct b;
typedef struct  b b;

void fun(b a)
{
    printf("\n%d",a.d);
}

struct b
{
    int d;
};

main()
{
    b a;
    a.d=32;
    fun(a);
}