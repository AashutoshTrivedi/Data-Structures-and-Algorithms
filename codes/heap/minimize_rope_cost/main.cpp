// minimize the cost of connected ropes.
// Given an array containing the rope length, find the minimum cost
// of rope obtained by joining any two ropes at a time.
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5};
  int len = sizeof(arr)/sizeof(arr[0]);
  int cost = 0;
  priority_queue <int, vector<int>,greater<int>> minh;
  for(int i=0;i<len;i++)
  {
    minh.push(arr[i]);
  }
  while(int(minh.size())>1)
  {

    int first = minh.top();
    minh.pop();
    int second= minh.top();
    minh.pop();
    cost = cost + first + second;
    minh.push(first+second);
  }
  cout<<cost;


  return 0;
}
