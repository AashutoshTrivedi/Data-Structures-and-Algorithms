#include <iostream>
#include<queue>
#include<stack>
using namespace std;

class node
{
public:
  int data;
  node* left;
  node * right;

  node(int d)
  {
    data = d;
    left = right = NULL;
  }
};

class tree{
public:
  node* insert(node* n, int d);
  void print_inorder(node * n);
  void print_preorder(node * n);
  void print_postorder(node *n);
  void print_levelorder(node * n);
  void print_zigzag(node* n);
};


node* tree::insert(node * n, int d)
{
  if(n == NULL)
  {
    return new node(d);
  }
  node * curr;
  if(d <= n->data)
  {
    curr = insert(n->left,d);
    n->left = curr;
  }
  else if (d>n->data)
  {
    curr= insert(n->right,d);
    n->right = curr;
  }
  return n;
}
void tree::print_inorder(node* n)
{
  if(n == NULL)
  {
    return;
  }
  print_inorder(n->left);
  cout<<n->data<<" ";
  print_inorder(n->right);

}
void tree::print_preorder(node* n)
{
  if(n == NULL)
  {
    return;
  }
  cout<<n->data<<" ";
  print_preorder(n->left);
  print_preorder(n->right);

}
void tree::print_postorder(node* n)
{
  if(n == NULL)
  {
    return;
  }
  print_postorder(n->left);
  print_postorder(n->right);
  cout<<n->data<<" ";

}
void tree::print_levelorder(node *n)
{
  queue<node *> q;
  node * root;
  root = n;

  if(root==NULL)
  {
    return;
  }
  while(root!= NULL)
  {
    cout<<root->data<<" ";
    if(root->left != NULL){q.push(root->left);}
    if(root->right != NULL){q.push(root->right);}

    if(!q.empty())
    {
      root = q.front();
      q.pop();
    }
    else
    {
      root = NULL;
    }

  }

}
void tree::print_zigzag(node *root)
{
  stack<node*> stack1;
  stack<node*> stack2;
  bool currlevel = true;
  node * n = root;
  int k = 1;
  stack2.push(n);
  if(n == NULL)
  {
    return;
  }
  while(k!=0)
  {
    if(currlevel)
    {
      while(!stack2.empty())
      {
        n = stack2.top();
        cout<< n->data<< " ";
        stack2.pop();
        if(n->left!=NULL){stack1.push(n->left);}
        if(n->right!= NULL){stack1.push(n->right);}
      }
      currlevel = !currlevel;
    }
    else
    {
      while(!stack1.empty())
      {
        n= stack1.top();
        cout<<n->data<<" ";
        stack1.pop();
        if(n->right!= NULL){stack2.push(n->right);}
        if(n->left!=NULL){stack2.push(n->left);}

      }
      currlevel = !currlevel;
    }
    if(stack1.empty() && stack2.empty()){k = 0;}
}
}

int main()
{
  tree t;
  node* root = NULL;
  int T,d;
  cout<<"Enter the elements you want to insert";
  cin >>T;
  while(T--)
  {
    cin>>d;
    root = t.insert(root, d);
  }
  cout<<"In Order  ";
  t.print_inorder(root);
  cout<<"\nPost Order  ";
  t.print_postorder(root);
  cout<<"\nPre order  ";
  t.print_preorder(root);
  cout<<"\nLevel Order  ";
  t.print_levelorder(root);
  cout<<"\nZig-Zag Order  ";
  t.print_zigzag(root);
  return 0;
}
