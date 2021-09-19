#include<stdio.h>
#include <termios.h>
#include <unistd.h>
int getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
struct form{

char username [20];

char address[30];
 int phnno;

char email [20];

char password[8];

char confirmpass[8];
};

int main()

{struct form arr[3];

int i,j;
char c;
for(i=0;i<3;i++)
{

    printf("enter ur details: \n");
    scanf("%s",&arr[i].username);
    scanf("%s",&arr[i].address);
    scanf("%d",&arr[i].phnno);
    scanf("%s",&arr[i].email);
    for(j=0;j<8;j++)
    {
    	c=getch();
    	arr[i].password[j]=c;
    	printf("*");
	}
	getch();
    printf("\n");
    printf("display: ");
    printf("%s\n",arr[i].username);
    printf("%s\n",arr[i].address);
    printf("%d\n",arr[i].phnno);
    printf("%s\n",arr[i].email);
    printf("%s\n",arr[i].password);
}
}