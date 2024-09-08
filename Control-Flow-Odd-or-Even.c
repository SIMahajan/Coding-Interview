#include <stdio.h>

int main()
{
    int N = 101;

    int r = N % 2;
    if (r == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}

// using Bitwise AND operator
// int main()
// {
//     int N = 101;
//     if (N & 1){
//         printf("Odd\n");
//     }
//     else{
//         printf("Even\n");
//     }
//     return 0;
// }
