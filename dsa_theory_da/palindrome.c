#include<stdio.h>
#include <string.h>

int check(char* str,int s,int e)
{
    if(s>e)
    return 1;
    if(str[s]!=str[e])
    return 0;

    return check(str,s+1,e-1);
}

main()
{
    char str[100];
    int i=0;

    printf("\nEnter the string: ");
    gets(str);

    if(check(str,0,strlen(str)-1))
    printf("Palindrome");
    else
    printf("Not palindrome");
}