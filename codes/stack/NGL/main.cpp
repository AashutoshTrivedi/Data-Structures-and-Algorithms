// Nearest greater to the left probelm
#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  stack <int> s;
  int arr[] ={23,1,34,56,12,12,6,32,43,21,4,45,3,21};
  int len = sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++)
  {
    if(s.empty())
    {
      v.push_back(-1);
      s.push(arr[i]);
    }
    else
    {
      while(!s.empty() && s.top() <  arr[i])
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
  for(int i=0;i<int(v.size());i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}
