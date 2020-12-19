//memoization method
#include <iostream>
int arr[100] = {-1};
int fib_d_m(int n)
{
  if(arr[n]!=-1)
  {
    return arr[n];
  }
  else
  {
    return arr[n] = fib_d_m(n-1)+fib_d_m(n-2);
  }
}

int max_ways_d_m(int n)
{
  arr[0] = 0;
  arr[1] = 1;
  for(int i=2;i<100;i++)
  {
    arr[i] = -1;
  }
  return fib_d_m(n+1);
}
