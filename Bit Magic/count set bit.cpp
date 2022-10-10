Method 1 (naive solution)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count=0;
    cin >> n;
    while (n > 0)
    {
        if (n & 1 == 1)
            count++;
        n=n>>1;
    }
    cout << count;
    return 0;
}

....................................................................
 
Method 2 (Brian Kerningam's Algorithm)
  
int countBits (int n)
{
    int count=0;
    while (n > 0)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}

....................................................................
        
Method 3 (Lookup Table Method for 32 bit numbers)
    
int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table [i / 2];
    }
}
int count (int n)
{
    int res = table [n & 0xff];
    n = n >> 8;
    res = res + table [ n & 0xff];
    n = n >> 8;
    res = res + table [ n & 0xff];
    n = n >> 8;
    res = res + table [ n & 0xff];
    return res;
}   
