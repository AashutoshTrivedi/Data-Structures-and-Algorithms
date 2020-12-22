#include<bits/stdc++.h>
using namespace std;

int t[1001][1001];
int solve(int arr[], int i, int j)
{
  if(i>=j)
  {
    return 0;
  }
  if(t[i][j]!= -1)
  {
    return t[i][j];
  }
  int min = INT_MAX;
  for(int k=i;k<j;k++)
  {
    int temp = solve(arr, i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
    if(temp<min)
    {
      min = temp;
    }
  }
  return t[i][j] = min;

}
int main()
{
  memset(t,-1,sizeof(t));
  int arr[] = {40,20,30,10,30};
  int l = sizeof(arr)/sizeof(arr[0]);
  cout<<"\nMemoized answer: "<<solve(arr,1,l-1)<<"\n";
  return 0;
}
