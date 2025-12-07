

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

int fibonacci_iter(int n)
{

    if (n <= 1)
    {
        return n;
    }

    int count = 2;

    int prev = 1;
    int pprev = 0;

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