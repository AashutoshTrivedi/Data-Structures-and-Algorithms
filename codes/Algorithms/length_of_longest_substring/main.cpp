#include <iostream>

using namespace std;


int lengthOfLongestSubstring(string s) {
    string ss;
    ss.push_back(s[0]);
    int sum = 0,k=0;
    for(int i=1;i<s.size();i++)
    {

        k = ss.size();
        cout<<k<<endl;
        for(int j = 0;j<k;j++)
        {
            if(s[i] == ss[j])
            {
                cout<<j;
                ss.clear();
                if(k > sum)
                {
                    sum = k;
                }
                k = 0;
                break;
            }
        }
        ss.push_back(s[i]);
    }
    return sum;

}

int main()
{
    cout << "Hello world!" << endl;
    string s = "abcabcab";
    cout << lengthOfLongestSubstring(s);


    return 0;
}
