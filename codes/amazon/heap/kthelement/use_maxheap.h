#include <bits/stdc++.h>
using namespace std;

int use_maxheap(int arr[],int l,  int k)
{
  priority_queue<int> maxh;
  for(int i =0;i<l;i++)
  {
    maxh.push(arr[i]);
    if(maxh.size() > k)
    {
      maxh.pop();
    }

  }
  return maxh.top();
}
