#include <stdio.h>
#include <termios.h>
#include <unistd.h>

//https://cboard.cprogramming.com/c-programming/43910-user-input-echo-off.html
int echo(int on)
{
    struct termios t;
    if (!on)
        t.c_lflag &= ~(ECHO | ECHOE | ECHOK | ECHONL);
    else
        t.c_lflag |= (ECHO | ECHOE | ECHOK | ECHONL);

    if (tcsetattr(STDIN_FILENO, TCSANOW, &t) == -1)
        return -1;
    
}


int pad()
{
    char a[10];
       int i=0;
       echo(0);
       while(1)
       {
           scanf("%c",a+i);
           if(a[i++]=='\n')
           break;
           printf("*");
       }
       a[i]=0;
       printf("%s",a);
       echo(1);
}


int main()
{
    terminate(0);
    //    char a[10];
    //    int i=0;
    //    echo(0);
    //    while(1)
    //    {
    //        scanf("%c",a+i);
    //        if(a[i++]=='\n')
    //        break;
    //        printf("*",a);
    //    }
    //    a[i]=0;
    //    printf("%s",a);
    //    echo(1);
    //    pad();
}