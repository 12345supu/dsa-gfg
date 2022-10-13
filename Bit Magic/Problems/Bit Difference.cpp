//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.
//__builtin_popcount(n) function count the set bits in a number n.

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    
    int countBitsFlip(int a, int b){
        int x = a ^ b;
        return __builtin_popcount(x);
        // Your logic here
    }
};
