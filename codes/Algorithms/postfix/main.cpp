#include <iostream>
#include <string>
#include <stack>
using namespace std;

int cal(string oprt, int op1, int op2)
{
   if(oprt == '+')
        {return op1+op2;}
   else if(oprt == '-')
        {return op1-op2;}
   else if(oprt == '*')
        {return op1*op2;}
   else if(oprt == '/')
        {return op1/op2;}
   return 0;
}

int eval(string exp)
{
   int q1,q2;
   stack<int> s;
   for(int i=0;i<exp.length();i++)
     {
        if(exp[i] != '-' ||exp[i]!= '*' ||exp[i]!= '+' ||exp[i]!= '/')
        {
           s.push(stio(exp[i]));
        }
        else
        {
           q2 = s.top();
           s.pop();
           q1 = s.top();
           s.pop();
           s.push(cal(exp[i], q1,q2));
        }
     }
    return s.top();
}



int main()
{
   string s("23*45*+2-");
   cout<<eval(s);
   return 0;
}

