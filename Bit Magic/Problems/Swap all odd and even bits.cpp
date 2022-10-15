//Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43(00101011). Here, every even position bit is swapped with an adjacent bit on the right side(even position bits are highlighted in the binary representation of 23), and every odd position bit is swapped with an adjacent on the left side.

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        for(int i = 31; i > 0; i = i - 2)
    	{
    	    int a = n & (1 << i);
    	    int b = n & (1 << (i - 1));
    	    if(a != 0 && b != 0) 
    	        continue;
    	    if(a != 0 || b !=0)
    	    {
	            n=n^(1<<i);
	            n=n^(1<<(i-1));
    	    }
    	}
    	return n;
    	// Your code here
    }
};
