// All number appear even number of times except one number. Return the odd occuring number.

int findOdd(int arr[], int n)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    return res;
}

//Variation Question: Every number appears exactly once and one number is missing in the range [1,n+1]. Find the missing number.

int missing(int arr[], int n)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }
    for(int i = 0; i < n + 1; i++)
    {
        res ^= i;
    }
    return res;
}
