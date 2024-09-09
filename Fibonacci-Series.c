// using loops
#include <stdio.h>
// int main()
// {

//     int n = 2;
    
//         if (n < 1)
//         {
//             printf("Invalid Number of terms\n");
            
//         }

//         int prev1 = 1;
//         int prev2 = 0;

//         // for loop to print fibonacci series
//         for (int i = 1; i <= n; i++)
//         {
//             if (i > 2)
//             {
//                 int num = prev1 + prev2;
//                 prev2 = prev1;
//                 prev1 = num;
//                 printf("%d ", num);
//             }
//             if (i == 1)
//             {
//                 printf("%d ", prev2);
//             }
//             if (i == 2)
//             {
//                 printf("%d ", prev1);
//             }
//         }
    
//     return 0;
// }
// function to print fibonacci series
// void printFib(int n)
// {
//     if (n < 1)
//     {
//         printf("Invalid Number of terms\n");
//         return;
//     }

//     int prev1 = 1;
//     int prev2 = 0;

//     // for loop to print fibonacci series
//     for (int i = 1; i <= n; i++)
//     {
//         if (i > 2)
//         {
//             int num = prev1 + prev2;
//             prev2 = prev1;
//             prev1 = num;
//             printf("%d ", num);
//         }

//         // for first two terms
//         if (i == 1)
//         {
//             printf("%d ", prev2);
//         }
//         if (i == 2)
//         {
//             printf("%d ", prev1);
//         }
//     }
// }

// // driver code
// int main()
// {

//     int n = 9;
//     printFib(n);
//     return 0;
// }
// using recursion

int prev1 = 1;
int prev2 = 0;
int fib(int n)
{
    if (n >=3)
    {
        int num = prev1 + prev2;
        prev2 = prev1;
        prev1 = num;
        printf("%d ", num);
        fib( n - 1);
    }
}
int main()
{

    int n = 9;
    if (n < 1)
    {
        printf("Invalid Number of terms\n");
    }
    printf("%d ", prev2);
    printf("%d ", prev1);
    fib(n);
    return 0;
}