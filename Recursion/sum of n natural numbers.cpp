Method 1
  
int sumOfNat(int n)
{
    if(n == 0)
        return 0;
    return n+ sumOfNat(n-1);
} 

...............................................................
  
Method 2 (tail recursion)

int sumOfNat(int n, int k = 0)
{
    if(n == 0)
        return k;
    return sumOfNat(n-1, k+n);
}
