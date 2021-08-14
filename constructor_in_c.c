#include        <stdio.h> 

void __attribute__ ((constructor)) default_constructor() 
{ 
    printf("%s\n", __FUNCTION__); 
} 

int main() 
{ 
    
}