void twoOddAppearing(int arr[], int n)
{
  int ans = 0, res1 = 0, res2 =0;
  for(int i = 0; i < n; i++)
  {
    ans = ans ^ arr[i];
  }
  int s = ans & ~(ans - 1);                  //Rightmost set bit
  for(int i = 0; i < n; i++)
  {
    if((arr[i] & s) != 0)
      res1 = res1 ^ arr[i];
    else
      res2 = res2 ^ arr[i];
  }
  cout<<res1<<" "<<res2;
}
