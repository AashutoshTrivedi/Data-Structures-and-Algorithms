#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {11,13,16,18,20,2,5,6,8,10};
  int len = sizeof(arr)/sizeof(arr[0]);
  int start = 0;
  int end = len-1;

  while(start<=end)
  {
    int mid = start + (end-start)/2;
    int next = (mid+1)%len;
    int prev = (mid+len-1)%len;
    if(arr[prev] >=arr[mid] && arr[next] >= arr[mid])
    {
      cout<< mid;
      break;
    }
    if(arr[start] > arr[mid])
    {
      end = mid;
      cout<<"first\n";
    }
    else if(arr[end] < arr[mid])
    {
      start = mid;
      cout<<"second\n";
    }
  }

  return 0;
}
