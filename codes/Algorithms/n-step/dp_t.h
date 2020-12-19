// tabulation
int fib_d_t(int n)
{
  int arr_t[100];
  arr_t[0] = 0;
  arr_t[1] = 1;
  for(int i=2;i<=n;i++)
  {
    arr_t[i] = arr_t[i-1]+arr_t[i-2];
  }
  return arr_t[n];
}


int max_ways_d_t(int n)
{

  return fib_d_t(n+1);
}
