Method 1
int sumOfDigits(int n)
{
    if(n == 0)
        return 0;
    else
        return (n%10) + sumOfDigits(n/10);
}

........................................
  
Method 2 (tail recursion)
  
int sumOfDigits(int n,int k = 0)
{
    if(n == 0)
        return k;
    else
        return sumOfDigits(n/10, k+(n%10));
}
