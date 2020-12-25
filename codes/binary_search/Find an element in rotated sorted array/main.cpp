// Find the index of element k in the sorted-rotated array
#include<bits/stdc++.h>
using namespace std;
int bs(int arr[], int start, int end, int k)
{
  while(start<=end)
  {
    int mid = start + (end-start)/2;
    if(arr[mid] == k)
    {
      return mid;
    }
    if(arr[mid]<k)
    {
      start = mid+1;
    }
    else if(arr[mid]>k)
    {
      end = mid-1;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {11,12,15,18,2,5,6,8};
  int len = sizeof(arr)/sizeof(arr[0]);
  int k = 7;
  int start = 0;
  int end = len-1;
  int min;
  while(start<=end)
  {
    int mid = start + (end-start)/2;
    int prev = (mid-1)%len;
    int next = (mid+len-1)%len;
    if(arr[prev]>=arr[mid]&&arr[next]>=arr[mid])
    {
      min = mid;
      break;
    }
    if(arr[start]>arr[mid])
    {
      end = mid;
    }
    else if(arr[end] < arr[mid])
    {
      start = mid;
    }
  }
  start = 0;
  end = len-1;
  if(k>arr[end])
  {
    cout << bs(arr, start, min,k);
  }
  else if(k<arr[start])
  {
    cout<< bs(arr, min, end,k);
  }

  return 0;
}
