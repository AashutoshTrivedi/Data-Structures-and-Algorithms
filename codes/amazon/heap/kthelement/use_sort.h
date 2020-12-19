#include <bits/stdc++.h>
using namespace std;

void use_sort(int arr[], int len)
{
  sort(arr, arr+len);
  for(int i =0;i<len;i++)
  {
    cout<<arr[i]<<"\n";
  }
}
