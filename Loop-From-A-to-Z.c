#include <stdio.h>
//using for loop
int main()
{
    char i;

    printf("The Alphabets from A to Z are: \n");
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }

    printf("\nThe Alphabets from a to z are: \n");

    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c ", i);
    }

    return 0;
}
// using ASCII values
// int main()
// {
//     int i;
//     printf("Alphabets from (A-Z) are:\n");

//     // ASCII value of A=65 and Z=90
//     for (i = 65; i <= 90; i++)
//     {
//         printf("%c ", i);
//     }

//     printf("\nAlphabets from (a-z) are:\n");

//     // ASCII value of a=97 and z=122
//     for (i = 97; i <= 122; i++)
//     {
//         printf("%c ", i);
//     }

//     return 0;
// }

// wsing while loop

// int main()
//     {
//         char i;
//         i = 'A';
//         printf("The Alphabets from A to Z are: \n");
//         while(i <= 'Z')
//         {
//             printf("%c ", i);
//             i++;
//         }

//         printf("\nThe Alphabets from a to z are: \n");
//         i = 'a';
//         while( i <= 'z')
//         {
//             printf("%c ", i);
//             i++;
//         }

//         return 0;
//     }
// using do while loop

// int main()
// {
//     char i;
//     i = 'A';
//     printf("The Alphabets from A to Z are: \n");
   
//     do{
//         printf("%c ", i);
//         i++;
//     } while (i <= 'Z');

//         printf("\nThe Alphabets from a to z are: \n");
//     i = 'a';
   
//     do{
//         printf("%c ", i);
//         i++;
//     } while (i <= 'z');

//         return 0;
// }