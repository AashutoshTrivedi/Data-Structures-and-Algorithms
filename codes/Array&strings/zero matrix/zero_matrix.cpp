#include<iostream>
using namespace std;

int r{0},c{0};
void zeroRow(int *a)
{
  for(int i=0;i<c;i++)
  {
    a[i] = 0;
  }

}
void zeroColumn(int j,int a[][c])
{
  for (int i=0;i<r;i++)
  {
    a[i][j] = 0 ;
  }
}
int main()
{

  cout<<"Enter no of rows";
  cin>>r;
  cout<<"Enter no. of columns";
  cin>>c;
  int A[r][c];
  for(int i =0;i<r;i++)
  {
    for(int j =0;j<c;j++)
    {
      cin>>A[i][j];
    }
  }
  bool R[r] = {0},C[c] = {0};

  for(int i =0;i<r;i++)
  {
    for(int j =0;j<c;j++)
    {
      if(A[i][j] == 0)
      {
        R[i] = 1;
        C[j] = 1;
      }
    }
  }
  for(int i= 0;i<r;i++)
  {
    if(R[i] == 1)
    {
      zeroRow(&A[i][c]);
    }
  }
  for(int i= 0;i<c;i++)
  {
    if(C[i] == 1)
    {
      zeroColumn(r,i,A);
    }
  }
  for(int i =0;i<r;i++)
  {
    for(int j =0;j<c;j++)
    {
      cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
