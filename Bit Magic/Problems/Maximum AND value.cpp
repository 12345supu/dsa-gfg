int checkBit(int pattern, int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if ((pattern & arr[i]) == pattern)
            count++;
    return count;
}

int maxAND (int arr[], int n)
{
    int res = 0, count;
    for (int bit = 31; bit >= 0; bit--)
    {
      int m = res | (1 << bit);
        count = checkBit(m, arr, n);
        if (count >= 2)        
            res = m;        
    }
    return res;
}
