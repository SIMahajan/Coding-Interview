#include <stdio.h>

int factorial(int N)
{
    int fact = 1, i;
    for (i = 1; i <= N; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int N = 5;
    int fact = factorial(N);
    printf("Factorial of %d is %d", N, fact);
    return 0;
}

// using recurtion

//  int factorial( int N)
// {
//     // Loop from 1 to N to get the factorial
//     if(N==1)
//     {
//         return N;
//     }else{
//         return N * factorial(N - 1);
//     }
// }

// int main()
// {
//     int N = 5;
//     int fact = factorial(N);
//     printf("Factorial of %d is %d", N, fact);
//     return 0;
// }