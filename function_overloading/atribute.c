#include<stdio.h>
#include <math.h>
int f(int) __attribute__((overloadable));
int f(float) _attribute__((overloadable)); // error: redeclaration of "f" must have the "overloadable" attribute

__attribute__((overloadable))int f(int i)
{
    printf("\nInt %d",i);
    return 0;
}

void main() 
{
    // fun(32);
}
//not working