// An array will be provided and we have to find the minimum cost in multiplying
// the arrays. If given array will be og n size then the no of arrays in considration
// are n-1. Ex. if we are given arr = [x,y,z,p] then we'll be having three arrays
//  a,b,c such that size(a) = [x,y], b = [y,z], c = [z,p]. We need to calculate the
// cost when we multiply. Here we'll multily abc, so possibility is a(bc) or (ab)c.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int i, int j)
{
  if(i>=j)
  {
    return 0;
  }
  int min = INT_MAX;
  for(int k = i; k< j;k++)
  {
    int temp = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
    if(temp<min)
    {
      min = temp;
    }
  }
  return min;
}
int main()
{
  int arr[] = {40,20,30,10,30};
  int l = sizeof(arr)/sizeof(arr[0]);
  cout<<"\n"<<solve(arr,1,l-1);

  return 0;
}
