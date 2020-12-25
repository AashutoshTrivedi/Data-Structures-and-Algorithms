// Find a subarray with a given sum
// Method 1 Use brute force approach O(n^2)
// Method 2 Use sliding window approach-->here in this tut


#include<iostream>
using namespace std;

int main()
{
  int arr[] = {1, 4, 20, 3, 10, 5,1,17, -2,2};
  int sum = 33;
  int len = sizeof(arr)/sizeof(arr[0]);
  int i =0, l=0;
  int curr_sum = 0;
  while(i<len)
  {
    curr_sum += arr[i];
    while(curr_sum>=sum)
    {
      if(curr_sum == sum)
      {
        cout<<l<<" to "<<i<<"\n";
        break;
      }
      curr_sum -= arr[l];
      l++;
    }
    i++;

  }


  return 0;
}
