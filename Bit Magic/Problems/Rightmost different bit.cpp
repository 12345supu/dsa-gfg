//Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

int posOfRightMostDiffBit(int m, int n)
    {
        if(m == n)
            return -1;
        int x = m ^ n;
        int l = x & ~(x-1);
        int count = 0;
        
        while(l != 0){
          l = l >> 1;
            count++;
        }
        
        return count;
        // Your code here
    }
