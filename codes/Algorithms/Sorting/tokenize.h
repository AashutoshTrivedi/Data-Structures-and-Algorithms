using namespace std;

vector<string> tkn(string &str)
{
  stringstream ss(str);
	string s;
  vector<string> out;
	while (getline(ss, s, ' '))
  {
		out.push_back(s);
  }
  // vector<string> :: iterator i;
  // for(i = out.begin();i<out.end();i++)
  // {
  //   cout<<*i<<endl;
  // }
  return out;
}
