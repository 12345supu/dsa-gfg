//Function to find position of first set bit in the given number.
Method 1
unsigned int getFirstSetBit(int n)
    {
        unsigned int c=0;
        while(n > 0)
        {
            c++;
            if(n & 1 == 1)
                return c;
            n = n >> 1;
        }
        return c;
        // Your code here
    }

........................................................
  
Method 2
 
unsigned int getFirstSetBit(int n)
    {
        unsigned int x = n & ~(n-1);
        
        int count = 0;
        
        while(x!=0){
          x = x>>1;
            count++;
        }
        
        return count;
        // Your code here
    }
