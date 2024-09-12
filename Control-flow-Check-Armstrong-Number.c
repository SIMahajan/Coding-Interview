#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// int main()
// {
//     int N = 370;
//         int temp = N;
//         int sum = 0;
//         int K = log10(temp) + 1;
//         while (temp > 0)
//         {
//             int digit = temp % 10;
//             sum += pow(digit, K);
//             temp /= 10;
//         }
//     if (sum == N)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }
//     return 0;
// }
// using funcion

// bool isArmstrong(int N)
// {
//     int temp = N;
//     int sum = 0;
//     int K = log10(temp) + 1;
    
//     while (temp > 0)
//     {
//         int digit = temp % 10;
//         sum += pow(digit, K);
//         temp /= 10;
//     }
//     return (sum == N);
// }

// int main()
// {
//     int N = 370;
//     if (isArmstrong(N))
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }

//     return 0;
// }


//using recurtion

int armstrongSum(int N, int K)
{
    if (N == 0)
    {
        return 0;
    }
    int digit = N % 10;
    return pow(digit, K) + armstrongSum(N / 10, K);
}
bool isArmstrong(int N)
{

    int K = log10(N) + 1;
    int sum = armstrongSum(N, K);
    return (sum == N);
}

int main()
{
    int num = 370;

    if (isArmstrong(num))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}