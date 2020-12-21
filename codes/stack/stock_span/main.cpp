// Stock span problem, how many consecutive days prior to and including day d
// is smaller
// So basically here we are calculating the nearest greater to the left
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {100,80,60,70,60,75,85};
  stack pait<int,int> s;
  vector <int> v;
  int len = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0;i<len;i++)
  {
    if(s.empty())
    {
      v.push_back(-1);
      s.push({arr[i],i});
    }
    else
    {
      while(!s.empty() && arr[i] > s.top())
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
  for(int i=0;i<len;i++)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}
