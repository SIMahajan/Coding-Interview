#include <stdio.h>

void main()
{
    int a = 15,i=1;
    while (i<a)
    {
        if(a%i==0)
        {
            printf("prime");
        }
        i++;
    }
    

    printf("not prime");

}