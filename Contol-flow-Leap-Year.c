#include <stdbool.h>
#include <stdio.h>


// Driver code
int main()
{
    int year = 2000;
    
        if (year % 400 == 0 && year % 4 == 0)
        {
            printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}


// // Driver code
// int main()
// {
//     int year = 2000;

//     if (checkYear(year))
//     {
//         printf("Leap Year");
//     }
//     else
//     {
//         printf("Not a Leap Year");
//     }
//     return 0;
// }