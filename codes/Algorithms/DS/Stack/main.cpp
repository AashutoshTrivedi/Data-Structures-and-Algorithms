#include <iostream>

using namespace std;

class Stack
{
private:
    int *p;
    int top,length;
public:
    Stack(int = 0);
    ~Stack();

    void push(int);
    int pop();
    void display();
};

Stack::Stack(int size)
{
    top = -1;
    length = size;
    if(size == 0)
    {
        p = 0;
    }
    else
    {
        p = new int[length];
    }
}

Stack::~Stack()
{
    if(p!=0)
        delete [] p;
}

void Stack::push(int elem)
{
    if(p==0)
    {
        cout<<"Stack of zero size"<<endl;
        cout<<"Enter size for the stack"<<endl;
        cin >> length;
        p = new int[length];
    }
    if(top == length-1)
    {
        cout<<"\n Cannot push"<<elem<<" ,Stack full"<<endl;
        return;
    }
    else
    {
        top++;
        p[top] = elem;
    }
}
int Stack::pop()
{
    if(p==0 || top == -1)
    {
        cout<<"Stack empty!";
        return -1;
    }
    int ret = p[top];
    //p[top] = NULL;
    top--;
    return ret;

}
void Stack::display()
{
    for(int i= 0; i<=top; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Stack s1(6);
    s1.push(1);
    s1.display();
    s1.push(2);
    s1.push(3);
    s1.push(34);
    s1.push(90);
    s1.push(43);
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();
}
