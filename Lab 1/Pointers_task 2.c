#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    *ptr = 20;

    printf("New value of a: %d\n", a);
    printf("Dereferenced pointer value: %d\n", *ptr);

    return 0;
}