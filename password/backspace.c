#include<stdio.h>
//not working
main()
{
    int password[30],i=0;
    char ch;
    printf("\nENTER PASSWORD: ");
while (1)
{
    ch=getch();
    if(ch==13)    //ON ENTER PRESS
        break;

    else if(ch==8)    //ON BACKSPACE PRESS REMOVES CHARACTER
    {
        if(i>0)
        {
            i--;
            password[i]='\0';
            printf("\b \b");
        }
    }
    else if (ch==32 || ch==9)    //ON PRESSING TAB OR SPACE KEY
        continue;
    else
    {
        password[i]=ch;
        i++;
        printf("*");
    }         
}
password[i]='\0';
}