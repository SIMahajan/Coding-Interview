
bool isPrime(int N)
{
    if (N <= 1)
    {
        return false;
    }
       for (int i = 2; i < N; i++)
    {

       if (N % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int N = 29;
    printf("Is %d prime?\n", N);

    if (isPrime(N))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}