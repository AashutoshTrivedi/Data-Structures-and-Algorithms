#include <iostream>
#include <string>
#include <stack>
using namespace std;

int cal(string opr, int op1, int op2)
{
   switch(opr)
     {
        case '+': 
            return op1+op2;
            break;
        case '-': 
            return op1-op2;
            break;
        case '/': 
            return op1/op2;
            break;
        case '*': 
            return op1*op2;
            break;
        default:
            cout<<"error";
            return 0;

     }
   
} 

int eval(string exp)
{
   int q1,q2;
   stack<int> s;
   for(int i=0;i<exp.length();i++)
     {
        if(exp[i] != '-' ||exp[i]!= '*' ||exp[i]!= '+' ||exp[i]!= '/')
        {
           int x =0;
           stringstream a(exp[i]);
           a>>x;
           s.push(x);
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

