#include <stdio.h>
// 1. Basic Addition
// void main()
// {

//     int a, b, sum;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);
//     sum = a + b;
//     printf("Sum: %d", sum);
// }

// 2. Using a Function

// int add(int x, int y)
// {
//     return x + y;
//     }
//     void main()
//     {

//         int a, b, sum;
//         printf("Enter two integers: ");
//         scanf("%d %d", &a, &b);
//         sum = add(a, b);
//         printf("Sum: %d\n", sum);
//     }

// 3. Using Pointers

// int main()
// {
//     int a = 5;
//     int b = 3;
//     int *p1 = &a;
//     int *p2 = &b;
//     int sum = *p1 + *p2;
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// 4. Using Arrays

// int main()
// {
//     int nums1[] = {1, 2, 3};
//     int nums2[] = {4, 5, 6};
//     int sum[3];
//     for (int i = 0; i < 3; i++)
//     {
//         sum[i] = nums1[i] + nums2[i];
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Sum of pair %d: %d\n", i + 1, sum[i]);
//     }
//     return 0;
// }

// 5. Using Structures

// struct Numbers
// {
//     int a;
//     int b;
// };

// int main()
// {
//     // Initialize the structure
//     struct Numbers nums = {5, 3};
//     // Add the numbers
//     int sum = nums.a + nums.b;
//     // Print the result
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// 6. Using Recursion

//  Recursive function to add two numbers
int add(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return add(a + 1, b - 1);
}

int main()
{
    int a = 5;
    int b = 3;
    int sum = add(a, b);
    printf("Sum: %d\n", sum);
    return 0;
}
/**/