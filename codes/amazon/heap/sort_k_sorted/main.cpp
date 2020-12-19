// sort a k-sorted array
// Always remember to approach a heap problem using sorting
// and then only move to heap
// flow --> sorting -> heap
//  for creating maxheap use priority_queue <int>
// for creating min hear use priority_queue<int, vector<int>, greater<int>>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {10, 9, 8, 7, 4, 70, 60, 50};
  int k = 4;
  priority_queue <int, vector<int>, greater<int>> minh;
  int len = sizeof(arr)/sizeof(arr[0]);
  int output[len];
  int j =0;
  for(int i=0;i<len;i++)
  {
    minh.push(arr[i]);
    if(int(minh.size())>k)
    {
      output[j] = minh.top();
      j++;
      minh.pop();
    }
  }
  while(!minh.empty())
  {
    output[j] = minh.top();
    minh.pop();
    j++;
  }
  for(int i =0;i<len;i++)
  {
    cout<<" "<<output[i]<<"->";
  }

  return 0;
}
