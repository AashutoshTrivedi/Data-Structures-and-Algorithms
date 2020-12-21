#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
int main()
{
  int arr[] = {1,2,3,4,5,1,2,1,2,1,2,3,4,5,3,4,5,3,2,3,5,6,2,1,2,3,3,3,3,3,4};
  int len = sizeof(arr)/sizeof(arr[0]);
  unordered_map<int,int> mp;
  int k =2;
  priority_queue <p, vector<p>, greater<p>> minh;
  for(int i=0; i<len ;i++)
  {
    mp[arr[i]]++;
  }
unordered_map<int,int>::iterator itr;
for(itr = mp.begin(); itr!= mp.end(); itr++)
{
  cout<<itr->first<<": "<<itr->second<<"\n";
  minh.push({itr->second, itr->first});
  if(int(minh.size())>k)
  {
    minh.pop();
  }
}
while(!minh.empty())
{
  cout<<minh.top().second<<": "<<minh.top().first<<"\n";
  minh.pop();
}


  return 0;
}
