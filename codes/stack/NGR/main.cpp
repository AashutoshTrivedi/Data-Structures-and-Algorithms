//  nearest greater to right or next largest element
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
  int arr[] = {23,4,1,44,23,54,13,53,3,34,1};
  stack<int> s;
  vector<int> v;
  int len = sizeof(arr)/sizeof(arr[0]);
  for(int i=len-1;i>=0;i--)
  {
    if(s.empty())
    {
      v.push_back(-1);
      s.push(arr[i]);
    }
    else
    {
      while(!s.empty() && s.top() < arr[i])
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
  cout<<"\n";
  for(int i =int(v.size())-1;i>=0;i--)
  {
    cout<<v[i]<<" ";
  }
  return 0;
}
