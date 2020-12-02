#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include "str_itr.h"
#include "fibdp.h"

using namespace std;

int main()
{
  int n;
  cout<<"Enter the number of words";
  cin>>n;
  //dynamic(n);
  cout<<fibdp(n)<<"\n";
  cout<<fib(n);
}
