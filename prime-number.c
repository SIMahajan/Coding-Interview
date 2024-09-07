#include <stdbool.h>
#include <stdio.h>
void main()
{
    int count = 0, N = 1;
    printf("Is %d prime?\n", N);
    if (N <= 1)
    {
        count += 1;
    }
    for (int i = 2; i < N; i++)
    {

        if (N % i == 0)
        {
            count += 1;
        }
    }

    if (count <= 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}

// using function

// bool isPrime(int N)
// {
//     if (N <= 1)
//     {
//         return false;
//     }
//        for (int i = 2; i < N; i++)
//     {

//        if (N % i == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int N = 29;
//     printf("Is %d prime?\n", N);

//     if (isPrime(N))
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }

//     return 0;
// }

// by using complexity

// #include <math.h>
// #include <stdbool.h>
// #include <stdio.h>

// bool isPrime(int N)
// {
//     // If number is less than/equal to 1, it is not prime
//     if (N <= 1)
//     {
//         return false;
//     }

//     // If the number is 2 or 3, it is prime
//     if (N <= 3)
//     {
//         return true;
//     }

//     // If the number is divisible by 2 or 3, it is not prime
//     if (N % 2 == 0 || N % 3 == 0)
//     {
//         return false;
//     }

//     // Check for divisors from 5 to the square root of N
//     for (int i = 5; i * i <= N; i += 6)
//     {

//         // If N is divisible by i or (i + 2), it is not
//         // prime
//         if (N % i == 0 || N % (i + 2) == 0)
//         {
//             return false;
//         }
//     }

//     // If no divisors are found, it is prime
//     return true;
// }

// // Driver code
// int main()
// {
//     int N = 29;
//     printf("Is %d prime?\n", N);

//     if (isPrime(N))
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }

//     return 0;
// }