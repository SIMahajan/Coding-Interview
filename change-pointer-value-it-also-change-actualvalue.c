#include <stdio.h>

void main()
{
    // First number
    int a = 5;
    // Pointer to the first number
    int *p1 = &a;
    // change pointer value it also change actualvalue
    *p1 = 10;
    printf("pointer %d\n", *p1);
    printf("real %d\n", a);
    // Pointer to the second number
}
/*pointer 10
real 10*/