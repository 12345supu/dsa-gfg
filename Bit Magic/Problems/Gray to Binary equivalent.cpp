class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        int ans = n;
        while(n > 0)
        {
            n = n >> 1;
            ans = ans ^ n;
        }
        return ans;
        // Your code here
    }
};
