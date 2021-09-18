#include<stdio.h>
#include<string.h>

char* password(int l)
{
    char *s=(char*)malloc(sizeof(char)*l);
    printf("\nEnter the password: ");
    for(int i=0;i<l;i++)
    s[i]=getchar();
    return s;
}

char print(char p[30])
{
    printf("%s",p);
}
main()
{
    char *s=password(3);
    // printf("%s",s);
    print(s);
    free(s);
}