void printOneToN(int n)
{
    if(n == 0)
        return;
    else
    {
        printOneToN(n-1);
        cout<<n<<" ";
    }
}

  
