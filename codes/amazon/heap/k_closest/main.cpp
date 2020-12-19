#include<bits/stdc++.h>
using namespace std;

int main()
{
  int k = 3;
  int n = 7;
  int arr[] = {2,5,3,6,8,9,7,21,45};
  int len = sizeof(arr)/sizeof(arr[0]);
  priority_queue <pair<int,int>> maxh;
  for(int i =0;i<len;i++)
  {
    maxh.push({abs(n-arr[i]),arr[i]});
    if(int(maxh.size())>k)
    {
      maxh.pop();
    }
  }
  while(!maxh.empty())
  {
    cout<<maxh.top().second;
    cout<<"\n";
    maxh.pop();
  }

  return 0;

}
