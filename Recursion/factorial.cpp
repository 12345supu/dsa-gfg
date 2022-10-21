Method 1
int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
    {
        return n * fact(n - 1);
    }
}

............................................
  
Method 2 (tail recursion)
  
int fact(int n, int k = 1)
{
    if(n == 0 || n == 1)
        return k;
    return fact(n - 1, k * n);
}
