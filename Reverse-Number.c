#include <stdio.h>
// int main()
// {
//     int num = 4562;
   
//     int rev_num = 0;
//     printf("before Reverse of  is %d\n", num);
//     while (num > 0)
//     {
//         rev_num = rev_num * 10 + num % 10;
//         num = num / 10;
//     }
//     printf("After Reverse of  is %d", rev_num);
// }
// using function

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

// Driver code
int main()
{
    int num = 4562;
    printf("Reverse of  is %d", reverseDigits(num));
}