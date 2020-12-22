//  printing the LCS(Subsequence) string using top-down approach
#include<bits/stdc++.h>
using namespace std;
string LCS(string x, string y, int lx, int ly)
{
  int t[lx+1][ly+1];
  for(int i=0;i<lx+1;i++)
  {
    for(int j=0;j<ly+1;j++)
    {
      if(i==0||j==0)
      {
        t[i][j] = 0;
      }
    }
  }
  for(int i=1;i<lx+1;i++)
  {
    for(int j=1;j<ly+1;j++)
    {
      if(x[i-1] == y[j-1] )
      {
        t[i][j] = 1+t[i-1][j-1];
      }
      else
      {
        t[i][j] = max(t[i-1][j], t[i][j-1]);
      }
    }
  }
  int i = lx;
  int j = ly;
  string s = "";
  while(i>0 && j>0){
    if(x[i-1] == y[j-1])
    {
      s.push_back(x[i-1]);
      i--;
      j--;
    }
    else
    {
      if(t[i-1][j]>t[i][j-1])
      {
        i--;
      }
      else
      {
        j--;
      }
    }
  }
  return s;

}

int main()
{
  string x = "abcdefgh";
  string y = "cqwabcdegd";
  string s;
  s = LCS(x,y,x.length(),y.length());
  reverse(s.begin(),s.end());
  cout<< s;
  return 0;
}
