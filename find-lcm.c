#include <stdbool.h>
#include <stdio.h>
#include <math.h>
// lcm
int main()
{
    int a = 20, b = 100;
    ;
    int max = (a > b) ? a : b;
    // Check every number from 1 to N
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("lcm is %d ", max);
            break;
        }
        ++max;
    }

    return 0;
}