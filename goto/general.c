#include<stdio.h>

void fun()
{
    goto ij;
}
main()
{
    for(int i=0;i<4;i++)//infinite loop
    goto th;
    th:
    printf("\nth");
   ij:
    printf("\nij");
}