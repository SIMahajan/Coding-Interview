// 1. Half Pyramid Pattern of Numbers
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include <stdio.h>

// int main()
// {
//     int rows;
//     printf("Number of rows: ");
//     scanf("%d", &rows);

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 2. Inverted Half Pyramid of Numbers
// int main()
// {
//     int rows;
//     printf("Number of rows: ");
//     scanf("%d", &rows);

//     // first loop for printing rows
//     for (int i = rows; i >= 1; i--)
//     {

//         // second loop for printing similar number in each rows
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
    // Number of rows : 5 
    // 5 5 5 5 5 
    // 4 4 4 4 
    // 3 3 3 
    // 2 2 
    // 1
    // 3. Full Pyramid Pattern of Numbers
    // C program to print the full pyramid pattern of alphabets
    // int main()
    // {
    //     int rows;
    //     printf("Number of rows: ");
    //     scanf("%d", &rows);
    //     for (int i = 1; i <= rows; i++)
    //     {
    //         for (int j = 1; j <= 2 * (rows - i); j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 1; k < 2 * i; k++)
    //         {
    //             printf("%d ", i);
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }

    // Number of rows : 6
    //               1
    //             2 2 2
    //           3 3 3 3 3
    //         4 4 4 4 4 4 4
    //       5 5 5 5 5 5 5 5 5
    //     6 6 6 6 6 6 6 6 6 6 6
    ////4 .print the pyramid pattern

    // void printPattern(int n)
    // {
    //     // Printing upper part
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //             printf("%d", i);
    //         printf("\n");
    //     }

    //     // printing lower part
    //     for (int i = n - 1; i > 0; i--)
    //     {
    //         for (int j = i; j > 0; j--)
    //             printf("%d", i);
    //         printf("\n");
    //     }
    // }

    // // Driver Code
    // int main()
    // {
    //     int n = 8;
    //     printPattern(n);
    //     return 0;
    // }
    // 1
    // 22
    // 333
    // 4444
    // 55555
    // 666666
    // 7777777
    // 88888888
    // 7777777
    // 666666
    // 55555
    // 4444
    // 333
    // 22
    // 1

    // 5. hollow pyramid of ” * ” &Numbers
    //  #include <stdio.h>

    //     int
    //     main()
    // {
    //     int n = 5;

    //     for (int i = 1; i <= n; i++)
    //     {
    //         // Print leading spaces
    //         for (int j = i; j < n; j++)
    //         {
    //             printf(" ");
    //         }

    //         // Print asterisks
    //         for (int k = 1; k <= 2 * i - 1; k++)
    //         {
    //             if (k == 1 || k == 2 * i - 1 || i == n)
    //             {
    //                 printf("*");
    //             }
    //             else
    //             {
    //                 printf(" ");
    //             }
    //         }

    //         // Move to the next line after each row
    //         printf("\n");
    //     }

    //     return 0;
    // }
    //     *
    //    * *
    //   *   *
    //  *     *
    // *********

    // 6. Diamond Pyramid of ” * ” & Numbers
    // #include <stdio.h>

    // int main()
    // {
    //     int n = 5;

    //     // Print the top pyramid
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n - i; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 1; k <= 2 * i - 1; k++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }

    //     // Print the inverted pyramid
    //     for (int i = n - 1; i >= 1; i--)
    //     {
    //         for (int j = 1; j <= n - i; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 1; k <= 2 * i - 1; k++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }

    //     return 0;
    // }
    //        *
    //       ***
    //      *****
    //     *******
    //    *********
    //     *******
    //      *****
    //       ***
    //        *