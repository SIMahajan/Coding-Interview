#include <stdio.h>

int main()
{
    int a = 5, b = 10, temp;
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping values of a and  b
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
/*Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5*/

// Without Using a Temporary Variable

// int main()
// {
//     int a = 5, b = 10;
//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     // Arithmetic operations to swap values
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }
/*Before swapping: a = 5, b = 10
After swapping: a = 10, b = 5*/

// Using Bitwise XOR Operator
// int main()
// {
//     int a = 5, b = 10;
//     printf("Before swapping: a = %d, b = %d\n", a, b);
//     // 1 ^ 1 = 0
//     // 1 ^ 0 = 1
//     // 0 ^ 1 = 1
//     // 0 ^ 0 = 0
//     // Apply XOR operations in the given order to swap values
//     a = a ^ b; // a(1111) = a(0101) ^ b(1010);
//     b = a ^ b; // b(0101) = a(1111) ^ b(1010);
//     a = a ^ b; // a(1010) = a(1111) ^ b(0101);

//     printf("After swapping: a = %d, b = %d\n", a, b);
//     return 0;
// }