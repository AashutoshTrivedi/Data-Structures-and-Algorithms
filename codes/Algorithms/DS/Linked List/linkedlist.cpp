#include<stdio.h>
#include <iostream>
using namespace std;


struct Node{
int data;
Node* next = NULL;
};
Node* head;

void insert_end(int data)
{
   Node* n = new Node();
   n->data = data;
   if(head == NULL)
     {
          head=n;
          return;
     }
   Node* temp;
   temp = head;
   while(temp->next!=NULL)
   { 
      temp = temp->next; 
   }
   temp->next = n; 
}

void printall()
{
   Node* temp;
   temp = head;
   while(temp!=NULL)
      {
           cout<< temp->data<<' ';
           temp = temp->next;
      }
}


void insert_begin(int data)
{
   if(head == NULL)
   { 
      head ->data = data;
      return;
    }
   Node* n = new Node();
   n->data  = data;
   n->next = head;
   head = n; 


}
int size()
{
    int i=0; 
    Node* temp = new Node();
    temp = head;
    while(temp->next != NULL) 
        {
           i++;
           temp = temp->next; 
        }
   return ++i; 

}
void insert_nth(int data, int n)
{
   if(n<1)
   { 
     return;
   }
   if (n==1)
   {  
      head->data = data;
      return;
   }
   else
  { 
       Node*temp = head;
       while(n-->2)
       {
            temp = temp->next; 
       }
       Node* n = new Node();
       n->data = data;
       n->next = temp->next;
       temp->next = n; 
  }

}

void dlt(int n)
{  
    Node* temp = new Node();
    if(n == 1)
    {
        temp = head->next;
        delete head;
        head = temp;
        return;    
    }

    temp = head;
    while(n-->2)
    {
         temp = temp->next; 
    }
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}
void reverse_itr()
{
    Node* temp1, *temp2, *temp;
    temp1 = head;
    temp = NULL;
    while(temp2!= NULL)
      { 
        temp2 = temp1->next;
        temp1->next = temp; 
        temp = temp1;         
        temp1 = temp2;
        
      } 
    head = temp;  
}

void reverse_rec(Node* temp)
{ 
   if(temp->next == NULL)
     {
        p = temp;
        return;
     }
   reverse_rec(temp->next);
   temp->next->next = temp;
   temp->next = NULL;

}

void Printb(Node* head)
{
    Node* temp = head;
    
    if(temp == NULL) return;
    Printb(temp->next);
    cout<<temp->data<<' ';
}

void Printf(Node* head)
{
    Node* temp = head;
    
    if(temp == NULL) return;
    cout<<temp->data<<' ';    
    Printf(temp->next);
}





int main()
{
insert_end(2);
insert_end(5);
insert_end(2);
insert_begin(4);
insert_end(6);
insert_begin(8);
printall();
cout<<'\n';
cout<<"Size is "<<size()<<'\n';
insert_nth(10,3);
printall();
cout<<'\n';
cout<<"Size is "<<size()<<'\n'; 
dlt(1);
printall();
reverse_itr();
cout<<"ITR\n";
printall();
reverse_rec(head);
cout<<"REC\n";
printall();
cout<<'\n';
Printb(head);
cout<<'\n';
Printf(head);
return 0;
}