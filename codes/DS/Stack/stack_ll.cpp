#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next = NULL;
};
Node * head = NULL;
 

void push(int x)
{ 

   Node *a = new Node();
   a->data = x;
   a->next = head;
   head = a; 
}
 void pop()
{
  if(top == NULL) return;
  Node* tmp = head;
  head = head->next;
  delete tmp;  
}
void Print()
{
   while(head != NULL)
    {
         cout<<head->data<<" ";
         head = head->next;
    }
}

int main()
{
    push(3);
    push(5);
    push(4);
    Print();  


}