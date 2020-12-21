#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int wt[] = {1,3,4,5};
  int val[] = {1,4,5,7};
  int W = 7;
  int n = sizeof(wt)/sizeof(wt[0]);
  int profit_r;
  profit_r = knapsack_recursion(wt,val,W,n);
  cout<<"Profit using recursive implementation: "<<profit_r<<"\n";
  return 0;
}
int knapsack_recursion(int wt[], int val[], int W, int n)
{
  // base condition
  if(n ==0 || W == 0)
  {
    return 0;
  }
  if(wt[n-1]>W)
  {
    return(knapsack_recursion(wt,val,W,n-1));
  }
  else
  {
    return(max(val[n-1]+knapsack_recursion(wt,val,W-wt[n-1],n-1), knapsack_recursion(wt,val,W,n-1)));
  }
}
