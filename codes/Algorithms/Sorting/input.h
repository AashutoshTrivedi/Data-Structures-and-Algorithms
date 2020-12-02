using namespace std;
struct Outer
{
  int i;
  vector<string> outvec;
};

Outer input()
{
  string s;
  Outer out;

  cout<<"What do you want to sort?\n";
  cout<<"1) Words\n2) Numbers\n Enter 1 or 2\n";
  cin>>out.i;
  cout<<"Enter space seperated line\n";
  cin.ignore();
  getline(cin, s);
  out.outvec = tkn(s);

  return out;
}
