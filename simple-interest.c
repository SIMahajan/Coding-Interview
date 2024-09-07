#include <stdio.h>
int main()
{

    float P = 1, R = 1, T = 1;

    // Calculate simple interest
    float SI = (P * T * R) / 100;

    printf("Simple Interest = %f\n", SI);

    return 0;
}

// using Function

// float smpInt(float p, float r, float t)
// {
//     return (p * r * t) / 100;
// }

// int main()
// {
//     // Input values
//     float P = 10000, R = 12, T = 1, SI;

//     // Call function to calculate simple interest
//     SI = smpInt(P, R, T);

//     // Display the result
//     printf("Simple Interest: %.2f\n", SI);    //%.2f = two value after .

//     return 0;
// }