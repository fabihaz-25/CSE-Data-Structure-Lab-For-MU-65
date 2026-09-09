#include <stdio.h>

int main()
{
    int a = 30;
    int *ptr = &a;      
    int **ptr2 = &ptr;  

    printf("Value of a using ptr2: %d\n", **ptr2);
    printf("Address of ptr itself: %p\n", (void *)ptr2);

    return 0;
}