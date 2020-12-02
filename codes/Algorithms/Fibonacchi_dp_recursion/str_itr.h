using namespace std;
void print(vector<string> s)
{
  vector<string> :: iterator i;
  for(i=s.begin(); i<s.end();i++)
  {
    cout<<*i<<" ";
  }
}
vector<string> dynamic(int n)
{
  vector<string> a;
  for(int k =0; k<n;k++)
  {
    cout<<"Input word "<<k+1<<endl;
    string s;
    cin>>s;
    a.push_back(s);
  }
  print(a);
  return a;
}
