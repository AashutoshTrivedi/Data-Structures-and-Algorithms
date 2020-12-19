int fib_r(int n)
{
  if(n<=1)
  {
    return n;
  }
  return fib_r(n-1)+fib_r(n-2);
}

int max_ways_r(int n)
{
  return fib_r(n+1);
}
