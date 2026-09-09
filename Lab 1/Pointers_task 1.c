#include <stdio.h>

int main() 
{
    int a = 10;
    int *ptr = &a;  

    printf("Value of a: %d\n", a);
    printf("Memory address of a: %p\n", (void *)ptr);

    return 0;
}