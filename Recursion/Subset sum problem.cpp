int sumSubsets(int arr[], int n, int sum)
{
  if(n == 0)
  {
    return (sum == 0) ? 1 : 0;
  }
  else
  {
    return sumSubsets(arr, n-1, sum) + sumSubsets(arr, n-1, sum - arr[n-1]);
  }
}
