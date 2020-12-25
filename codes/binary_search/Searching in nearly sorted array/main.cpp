// Searching for an element in a nearly sorted array.
// Nearly sorted means if an element in sorted array is to be found at ith index
// in a sorted array it can be at i-1 or i+1 th index in a nearly sorted array
// we'll be using modified binary search to find the index pf the element.
// Approach -> For finding an element k in sorted array we choose mid and  check
// whether that is the required element index, if yes then we return it else
// we move into one of the two other partitioned arrays. Here we'll do the same
// but check at ith, i+1th and i-1th element and  partitioning is done by including
// one more element.
#include<bits/stdc++.h>
using namespace std;

int mbs(int arr[], int start, int end, int k)
{

  while(start<=end)
  {
    int mid = start + (end - start)/2;
    if(arr[mid] == k) return mid;
    else if(mid-1>=start && arr[mid-1] == k) return mid-1;
    else if(mid+1<=end && arr[mid+1]== k) return mid+1;

    if(k>arr[mid])
    {
      start = mid+2;
    }
    else if(k<arr[mid])
    {
      end = mid-2;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {5,10,30,20,40};
  int len = sizeof(arr)/sizeof(arr[0]);
  int k = 5;
  int start = 0;
  int end = len-1;
  cout<<mbs(arr, start, end, k);
  return 0;
}
