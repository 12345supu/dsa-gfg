int fibonacci(int n, int k = 1)
{
    if(n == 0 || n == 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
