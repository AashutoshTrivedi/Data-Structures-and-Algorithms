#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int d;
    Node *left, *right;
    Node(int data)
    {
        d = data;
        left = right = NULL;
    }

};
class bst
{
public:
    Node *insert(Node *n, int d)
    {
        if(n == NULL)
        {
            return new Node(d);
        }
        else
        {
            Node *cur;
            if(d >= n->d )
            {
                cur =insert(n->right,d);
                n->right = cur;

            }
            else if(d<= n->d)
            {
                cur = insert(n->left,d);
                n->left = cur;
            }
            return n;
        }
    }

void levelOrder(Node *root)
{
    queue<Node *> q;
    Node *n;
    n = root;

    while(n != NULL)
    {
        cout<< n -> d << ' ';

        if(n->left != NULL) q.push(n->left);
        if(n->right != NULL) q.push(n->right);

        if(!q.empty())
        {
            n = q.front();
            q.pop();
        }
        else
        {
            n = NULL;
        }
    }


}
};

int main()
{
    cout << "Hello world!" << endl;

    Node *root = NULL;
    bst myqueue;
    int T,data;

    cin>>T;

    while(T-->0)
    {
        cin>>data;
        root = myqueue.insert(root, data);
    }
    myqueue.levelOrder(root);
    return 0;



}
