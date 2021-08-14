#include<stdio.h>
#include<stdlib.h>
#pragma warn
main()
{
    char str[]="0";
    char a=atoi(str);
    printf("%d %d",a,strcmp("0",str));
}