#include<stdio.h>
#include <unistd.h>
// https://stackoverflow.com/questions/6856635/hide-password-input-on-terminal
pass()
{
    char p[20];
    int i=0;
    char *c=0;
    while(c!="\n")
    {
        c=getpass("*");
        p[i++]=c[0];
    }
    printf("%s",p);
}
int main()
{
    char *password; 
    password = getpass("Enter Password: "); 
    printf("%s\n",password); 
    pass();
    return 1;
}