

int fibonacci_rec(int n)
{

    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

unsigned long long fibonacci_iter(int n)
{

    if (n <= 1)
    {
        return n;
    }

    int count = 2;

    unsigned long long prev = 1;
    unsigned long long pprev = 0;

    int fibo = 0;
    while (count <= n)
    {
        fibo = pprev + prev;

        pprev = prev;
        prev = fibo;

        count++;
    }
    return fibo;
}