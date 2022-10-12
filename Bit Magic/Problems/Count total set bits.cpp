//You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Method 1 (O(nLogn) 

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int c=0;
        for(int i = 1; i <= n; i++)
        {
            int m = i;
            while(m > 0)
            {
                m = (m & (m - 1));
                c++;
            }
        }
        return c;
        // Your logic here
    }
};
         
..................................................................
         
Method 2 (Pattern Recognition O(logn))
  
class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int findLargestPower(int n)
    {
        int x = 0;
        while ((1 << x) <= n)
            x++;
        return x - 1;
    }
    int countSetBits(int n)
    {
        if (n <= 1)
        return n;
        int x = findLargestPower(n);
        return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
        // Your logic here
    }
};
