//  given an array of alphabets and a key, we have to print the next alphabet
// present in the array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  char arr[] = {'a','b','f','h','k','l','m'};
  int len = sizeof(arr)/sizeof(arr[0]);
  int start = 0;
  int end = len-1;
  char k ='g';
  char res = '#';
  while(start<=end)
  {
    int mid = start+(end-start)/2;
    if(res>arr[mid] && arr[mid]>k)
    {
      res = arr[mid];
    }
    if(arr[mid] == k)
    {
      res = arr[mid+1];
      break;
    }
    if(arr[mid]>k)
    {
      end = mid-1;
      res = arr[mid];
    }
    else
    {
      start = mid+1;
    }
  }
  cout<<res;
  return 0;
}
