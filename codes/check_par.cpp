#include<iostream>
#include<string>
#include<stack>
#include<map>

using namespace std;

bool ArePair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

bool checkPar(string s)
{ 
    int n = s.length();
    stack<char> c;
    for(int i=0;i<n;i++)
    {
       if(s[i] == '(' || s[i] == '{' || s[i] == '[')
       {
           c.push(s[i]);      
       }
       else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
       {
           if(c.empty() == true || !ArePair(c.top(),s[i]))
              {
                   return false;
              }
           else
              {
                   c.pop(); 
              }
       }
    }
   return c.empty() ? true:false; 
}

int main()
{
  string s("()");
  cout<<checkPar(s)<<" empty";
  cout<<ArePair('{','}');
  return 0;
}