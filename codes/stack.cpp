#include<iostream>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void push(int x)
{
   if(top == MAX_SIZE)
    {
       cout<<"error";
       return;
    }
    A[++top] = x;
}
void pop()
{
    top--;
}
void top1()
{
    cout<<A[top];
}
void Print()
{
   cout<<"Stack ";
   for(int i=0;i<=top;i++)
      { 
          cout<<A[i]<<" ";
      }
   cout<<'\n';
}
int main()
{
  push(3); Print();
  push(4); Print();
  push(32); Print();



}