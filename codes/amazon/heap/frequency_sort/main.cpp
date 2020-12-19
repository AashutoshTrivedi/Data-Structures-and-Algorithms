// code for frequency sort
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
void print_max(priority_queue <p> x)
{
  while(!x.empty())
  {
    cout<<x.top().first<<": "<<x.top().second<<"\n";
    x.pop();
  }
}
void print_min(priority_queue <p,vector<p>, greater<p>> x)
{
  while(!x.empty())
  {
    cout<<x.top().first<<": "<<x.top().second<<"\n";
    x.pop();
  }
}
int main()
{
  int arr[] = {1,2,3,4,5,1,2,3,4,2,5,3,4,2,1,1,2,3,2,3,4,2,3,5,6,6,3,2,1};
  int len = sizeof(arr)/sizeof(arr[0]);
  priority_queue<p> maxh;
  priority_queue<p,vector<p>,greater<p>> minh;
  unordered_map<int,int> mp;
  for(auto i=0;i<len;i++)
  {
    mp[arr[i]]++;
  }
  for(auto i = mp.begin(); i!= mp.end(); i++)
  {
    minh.push({i->second,i->first});
    maxh.push({i->second, i->first});
  }
  cout<<"Ascending:\n";
  print_min(minh);
  cout<<"Descending:\n";
  print_max(maxh);

  return 0;
}
