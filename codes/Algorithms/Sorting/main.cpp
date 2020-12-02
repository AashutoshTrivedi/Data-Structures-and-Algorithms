#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include "tokenize.h"
#include "print.h"
#include "input.h"
using namespace std;

int main()
{
  Outer outer = input();
  int i = outer.i;
  vector<string> out = outer.outvec;

  if(i == 1)
  {

  }
  else if(i == 2)
  {
    vector<int> a;
    vector<string> :: iterator i;
    for(i = out.begin(); i<out.end();i++)
    {
      a.push_back(stoi(*i));
    }
    print(a);
  }


  else
  {
    return 0;
  }

}
