// 1)Using while loop
#include <stdio.h>
int main()
{
    int i=1, sum = 0, n = 10;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}

// 2)Using for loop
// int main()
// {
//     int sum = 0 , n = 10;
//     for (int i = 1; i <= n;i++)
//     {
//         sum += i;
//     }
//     printf("Sum = %d", sum);
//     return 0;
// }

// // 3)Using recursion
// int fun(int a)
// {
//     if (a != 0)
//     {
//         return a + fun(a - 1);
//     }
//     else
//     {
//         return a;
//     }
// }
// void main()
// {
//     int a, sum = 0, n = 12;
//     printf("Sum = %d", fun(n));
// }

// 4)Using Functions

// int sumofnaturalnumbers(int num)
// {
//     int i, s = 0;
//     for (i = 0; i <= num; i++)
//     {
//         s += i;
//     }
//     printf("Sum = %d", s);
// }

// int main()
// {

//     int number = 10;
//     sumofnaturalnumbers(number);
//     return 0;
// }