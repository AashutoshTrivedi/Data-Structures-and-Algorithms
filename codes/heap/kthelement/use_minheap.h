#include <bits/stdc++.h>
using namespace std;

int use_minheap(int arr[], int len, int k)
{
  priority_queue <int, vector<int>, greater<int>> minh;
  for(int i=0;i<len;i++)
  {
    minh.push(arr[i]);
    if(minh.size()>k)
    {
      minh.pop();
    }
  }
  return minh.top();
}
