//index starts with 0

int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) 
       is adjusted because the recursive call 
       josephus(n - 1, k) considers the original 
       position k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}
...........................................................
//index starts with 1

josephus(n,k) + 1;
