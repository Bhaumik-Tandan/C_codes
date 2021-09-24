#include<stdio.h>

main()
{
    char *str=(char*)(malloc(sizeof(char)*1));
    int i=0;

    printf("\nEnter the string: ");
    // while(scanf("%c",str+i) && str[i]!='\n')
    //     str=realloc(str,sizeof(char)*++i);

    while((str[i]=getchar())!='\n')
        str=realloc(str,sizeof(char)*++i);
    printf("%s",str);
}