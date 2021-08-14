// http://www.cs.cmu.edu/~ab/15-123N09/lectures/Lecture%2008%20-%20Function%20Pointers.pdf
#include<stdio.h>
#include <stdbool.h>
// typedef <return_type> (* fpointer)(argument list); 
void Sum()
{

}
void Dif()
{

}
void (*Convert(const char code)) () {//function pointer as return types
 if (code == '+') return &Sum;
 if (code =='-') return &Dif;
} 
main()
{
    printf("%d",Convert('-'));
}
