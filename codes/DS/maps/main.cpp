#include<iostream>
#include<map>
using namespace std;
struct num
{
  int a;
  int b;
};
int main()
{
  struct num x;
  x.a = 4;
  x.b = 5;

  map<int,struct num> sum;
  sum.insert(pair<int, struct num> (9,x));
  map<int, struct num> :: iterator itr;
  for(itr = sum.begin(); itr!=sum.end(); itr++)
  {
    cout<<itr->first<<"\n";
    cout<<itr->second.a<<itr->second.b<<"\n";
  }
  itr =  sum.find(9);
  cout<<"hey "<<itr->second.a
}
