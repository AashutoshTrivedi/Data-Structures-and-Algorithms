// Nearest smaller number to right
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {23,1,33,44,21,1,44,2,17,2,12,4,56,2,17,87};
  int len = sizeof(arr)/sizeof(arr[0]);
  vector <int> v;
  stack<int> s;
  for(int i = len-1;i>=0;i--)
  {
    if(s.empty())
    {
      v.push_back(-1);
      s.push(arr[i]);
    }
    else
    {
      while(!s.empty() && arr[i] < s.top())
      {
        s.pop();
      }
      if(s.empty())
      {
        v.push_back(-1);
        s.push(arr[i]);
      }
      else
      {
        v.push_back(s.top());
        s.push(arr[i]);
      }
    }
  }
  for(int i= len-1;i>=0;i--)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}
