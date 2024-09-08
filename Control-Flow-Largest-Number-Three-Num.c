#include <stdio.h>
int main()
{
    int c = 10, b = 22, a = 9;

    if (a >= b)
    {
        if (a >= c)
            printf("%d is the largest number.", a);
        else
            printf("%d is the largest number.", c);
    }
    else
    {
        if (b >= c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

    return 0;
}
 // Using Compound Expression in if-else
// int main()
// {
//     int a = 11, b = 2, c = 9;

//     // Finding max using compound expressions
//     if (a >= b && a >= c)
//         printf("%d is the largest number.", a);
//     else if (b >= a && b >= c)
//         printf("%d is the largest number.", b);
//     else
//         printf("%d is the largest number.", c);

//     return 0;
// }

// Using Temporary Variable
// int main()
// {
//     int a = 10, b = 22, c = 9;

//     // Assume a is the largest
//     int max = a;

//     // If b is larger than max
//     if (max < b)
//         max = b;

//     // If c is larger than max
//     if (max < c)
//         max = c;

//     printf("%d is the largest number.", max);
//     return 0;
// }
