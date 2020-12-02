#include<iostream>
using namespace std;

struct Node
{
  int data;
  Node* next = NULL;
};

Node* insert(Node** head, int data)
{
   Node* a = new Node();
   a->data = data;
   a->next = *head;
   *head = a; 
   return *head;
}

int pop(Node** head)
{
    Node* s = new Node;
    s = *head;
    *head = (*head)->next; 
    return s->data;   
}

Print(Node* head)
{
   while(head->next!= NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}


int main()
{
   Node* head = new Node();
   Node* reversed = new Node();
   insert(&head,3);
   insert(&head,8);
   insert(&head,5);
   insert(&head,32);
   insert(&head,6);
   Print(head);
   insert(&reversed,pop(&head));
   insert(&reversed,pop(&head));
   insert(&reversed,pop(&head));
   insert(&reversed,pop(&head));
   cout<<'\n';
   Print(reversed);


}