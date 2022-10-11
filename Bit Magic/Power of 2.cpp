// Check if given number is power of 2 or not

Method 1 (Naive solution)

bool isPow2(int n)
{
    if(n == 0)
        return false;
    while(n != 1)
    {
        if(n % 2 == 1)
            return false;
        n>>2;
    }
    return true;
}

...........................................................
  
Method 2 (only one bit set)

bool isPow2(int n)
{
    if(n == 0)
        return false;
    return ((n & (n-1)) == 0);
}

OR............................
  
bool isPow2(int n)
{
    return (n != 0) && ((n & (n - 1)) == 0);
}


