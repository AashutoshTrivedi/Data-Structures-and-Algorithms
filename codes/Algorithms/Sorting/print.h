void print(vector<string> a)
{
  vector<string> :: iterator i;
  cout<<"\n";
  for(i = a.begin(); i<a.end();i++)
  {
    cout<<*i<<endl;
  }

}
void print(vector<int> a)
{
  vector<int> :: iterator i;
  for(i = a.begin(); i<a.end();i++)
  {
    cout<<*i<<endl;
  }
}
