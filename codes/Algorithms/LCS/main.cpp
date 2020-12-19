#include<iostream>
#include<string>
#include"LCS.h"
using namespace std;

int main()
{
  string X = "abcsjfh";
  string Y = "bjsfh";
  int n = X.length();
  int m = Y.length();
  cout<<LCS(X,Y,n,m)<<"\n";
  return 0;
}
