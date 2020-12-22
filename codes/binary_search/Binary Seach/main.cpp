#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int n, int start, int end)
{
  if(start<=end)
  {
    int mid = (start+end)/2;
    if(arr[mid] == n)
    {
      return mid;
    }
    if(arr[mid]>n)
    {
       return bs(arr, n,start, mid-1);
    }
    else
    {
      return bs(arr,n,mid+1,end);
    }
  }
  return -1;
}
int main()
{
  int arr [] = {1,2,3,4,5,6,7,8,9,10};
  int i = 0;
  int n;
  cin>>n;
  int j = sizeof(arr)/sizeof(arr[0]) - 1;
  cout<< bs(arr, n, i,j);
  return 0;
}
