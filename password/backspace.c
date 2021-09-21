#include<stdio.h>
#include <termios.h>
#include <unistd.h>
//https://stackoverflow.com/a/1798833/16501544
void terminate(int on)
{
    static struct termios oldt, newt;
    if (!on)
    {
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    }
    else
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

char* pad(char mask)
{
    char *password=(char*)(malloc(sizeof(char)));
    int i=0;
    terminate(0);

    while(1)
    {
        char c=getchar();
        if(c=='\n')
        break;
        password=realloc(password,sizeof(char)*(i+1));
        printf("\b*",mask);
        password[i++]=c;
    }
    terminate(1);

    return password;
}
main()
{
    printf("%s",pad('*'));    
    char s[10];
    scanf("%c",s);
}