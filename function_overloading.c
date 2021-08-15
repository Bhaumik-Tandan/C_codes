#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addi(int a) {
    printf("jkhk");
}

void *adds(char *a) {
   printf("kh");
}
void af(float f)
{
    printf("jl");
}

#define add(a) _Generic(a, int: addi, char*: adds,double: af)(a)

int main(void) {
    int a = 1;
    add(a); // 3

    char *c = "hello ";
     add(c); 
    add('9');
    add(8.9);
    return 0;
}