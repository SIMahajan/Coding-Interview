bool isArmstrong(int N)
{
    int temp = N;
    int sum = 0;

    // Get the number of digits
    // Adding 1 to compensate for the loss of fraction part
    // of the value returned by log10 due to the conversion
    // into integer
     // 3

    // Calculate the sum of the digits raised to the power of
    // num_digits
    while (temp > 0)
    {
        int digit = temp % 10;
        printf("%d  ", (pow(digit, K)));
        sum += pow(digit, K);
        printf("%d  ", sum);
        temp /= 10;
    }

    // Return whether the sum is equal to the original number or not
    return (sum == N);
}

int main()
{
    int N = 153;
    if (isArmstrong(N))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}