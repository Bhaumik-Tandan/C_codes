#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main()
{
    long int n,m=0,i;//long int is used more more approximation
    double x,y;
    srand((unsigned)time(NULL));
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        //ternary operator decides the sign
        x= ((float)rand()/RAND_MAX)*((rand()>(RAND_MAX/2))?1:-1);//gives y cord
        y=(float)rand()/RAND_MAX*((rand()>(RAND_MAX/2))?1:-1);//gives x cord
       // printf("(%f %f)\n",x,y);//gives the list of all the points
        m+=(sqrt(x*x+y*y)<1);
    }
    printf("%lf",((4.0)*m)/n);
    return 0;
}
