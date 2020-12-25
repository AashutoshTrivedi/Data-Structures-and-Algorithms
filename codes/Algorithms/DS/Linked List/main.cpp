#include <iostream>

using namespace std;


class linkedList
{public:
    void delete(node *head)
    {

    }
    node *insert(int d, node *head)
    {
        if(head == NULL)
        {
            return new node(d);
        }
        if( head->next == NULL)
        {
            head ->next = new node(d)
        }
        else
        {
            insert(d, head->next);
        }
        return head;

    }
    void printlist(node *head)
    {
        node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
    }
};

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int main()
{
    linkedList l;
    node *a(5);
    l.insert(6,a);
    l.printlist();
    return 0;
}
