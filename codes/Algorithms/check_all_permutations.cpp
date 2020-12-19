#include <iostream>
#include <string>
using namespace std; 


void permutation(string str, string prefix) {
	if(str.length() == 0) {
		cout<<prefix<<"\n";
	}
	else
	{
		for(int i = 0; i<str.length();i++)
		{
			string rem = str.substr(0,i) + str.substr(i+1);
			permutation(rem, prefix + str.at(i));
		}
	}

}
int main()
{	
	string str = "ashu";
	permutation(str, "");
	return 0;
}

