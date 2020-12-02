#include<iostream>
#include<vector>
using namespace std;

vector<int> binary(int n)
{
    vector<int> a;
    while(n>0)
    {
        a.push_back(n%2);
        n=n/2;
    } 
    return a;
}
int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> a;
    int zeros = 0, max = 0;
    a = binary(N);
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == 1)
        {
            if(max<zeros)
            {
                max = zeros;
            }
            zeros = 0;
        }
        else
        {
            cout<<++zeros;
        }
    }
    return max;
}

int main()
{
   int a = 17;
   cout<<solution(a);
}