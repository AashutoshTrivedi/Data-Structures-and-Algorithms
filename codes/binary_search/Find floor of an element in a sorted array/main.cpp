//A sorted array will be given and an element whose floor needs to be calculated
// If a particular k is present in the array that will be it's floor as well as ceil
// But if not present then the floor will be greatest element present less than five.
// and ceil will be smallest element present > 5;

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,8,10,10,12,19};
  int len = sizeof(arr)/sizeof(arr[0]);
  int k = 13;
  int res=0;
  int start = 0;
  int end = len-1;
  while(start<=end)
  {
    int mid = start + (end-start)/2;
    if(arr[mid]<k && arr[mid] > res)
    {
      res = arr[mid];
    }
    if(arr[mid] == k)
    {
      res = arr[mid];
      break;
    }
    if(k>arr[mid])
    {
      start = mid+1;
    }
    else if(k<arr[mid])
    {
      end = mid-1;
    }
  }
  cout<<res;
  return 0;
}
