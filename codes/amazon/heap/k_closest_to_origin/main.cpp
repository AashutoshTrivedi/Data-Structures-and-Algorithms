//  here it was not necessary to actually calculate the distance by taking
// the squareroot but can be easily done using the squared values

// Doubt:: why is it not printing len-1 values only
#include<bits/stdc++.h>
using namespace std;
typedef pair<float,pair<int,int>> p;
int main()
{
  int arr[][2] = {{1,2},{3,4},{-1,4},{8,2},{11,4},{4,7}};
  int len = sizeof(arr)/sizeof(arr[0]);
  priority_queue <p> maxh;
  int k = 3;
  cout<<"length "<<len<<"\n";
  unordered_map <float, pair<int,int>> mp;
  for(int i =0 ;i<len;i++)
  {
    mp[sqrt((arr[i][0]^2)+(arr[i][1]^2))] = {arr[i][0],arr[i][1]};
  }
  unordered_map <float, pair<int,int>> :: iterator itr;
  for(itr = mp.begin(); itr!=mp.end();itr++)
  {
    cout<<itr->first<<": "<<itr->second.first<<", "<< itr->second.second<<" \n";
    maxh.push({itr->first, {itr->second.first,itr->second.second}});
    if(int(maxh.size())>k)
    {
      maxh.pop();
    }
  }
  cout<<"Top "<<k<<" elements\n";
  while(!maxh.empty())
  {
    cout<<maxh.top().first<<": "<<maxh.top().second.first<<", "<< maxh.top().second.second<<" \n";
    maxh.pop();
  }
  return 0;
}
