//Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.
// n>>1 -> shift all bits with 1 position
class Solution
{
    public:
    //Function to check if the number is sparse or not.
    bool isSparse(int n)
    {
        if((n & (n >> 1)) > 0 )
            return false;
        return true ;
        // Your code
    }
};
