#include <iostream>

using namespace std;

int main()
{
    int a[3];
    a[0] = 4;
    a[1] = 5;
    a[2] = 0;

    int *ptr = &a;
    cout<<ptr;
}
