void printNToOne(int n)
{
    if(n == 0)
        return;
    else
    {
        cout<<n<<" ";
        printNToOne(n-1);
    }
}
