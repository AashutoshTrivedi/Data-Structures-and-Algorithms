#include<iostream>
using namespace std;

struct Node
{
   int data ;
   Node* left = NULL;
   Node* right = NULL;
};
Node* r = new Node();


void insert(Node **r, int d)
{    
    Node *a = new Node();
    a->data = d;
    if((*r) == NULL)
    {
        (*r) = a;
        cout<<d<<"yes\n";
        return;
    }
    else if(d > (*r)->data)
    {
         insert(&((*r)->right), d);
         return;
    }
    else if(d <= (*r)->data)
    {
         insert(&((*r)->left),d);
         return;
    }
}

void Print(Node* root)
{
   if(root == NULL)
   {
      return;
   } 
   cout<<root->data;
   Print(root->right);
   Print(root->left);
}

int main()
{
   r = NULL;
   insert(&r,5);
   insert(&r,10);
   insert(&r,12);
   insert(&r,2);
   insert(&r,4);
   insert(&r,1);
   insert(&r,7);
   Print(r);
   
}