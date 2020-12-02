#include<iostream>
#include<string>
using namespace std;

bool isRotation(string s1, string s2)
{
  char c;
  c = s1[0];
  int n =  s1.length();
  for(int i =0;i<n; i++)
  {
    if(c != s2[i])
    {
      continue;
    }
    else
    {
      int j = 1;
      int k = i+1;
      if(k >= n) k = 0;
      while(j<n)
      {
        if(s1[j] != s2[k])
        {
          break;
        }
        else
        {
          j++;
          k++;
          if(k >= n) k = 0;
        }
      }
      if(j==n)
      {
        return true;
      }

    }
  }
  return false;
}

int main()
{
  string s1,s2;
  cout<<"Enter string first\n";
  cin>>s1;
  cout<<"Enter Second string\n";
  cin>>s2;
  if(s1.length() == s2.length())
  {
    cout<<isRotation(s1,s2);
  }
  else
  {
    cout<<"length different";
  }

  return 0;
}
