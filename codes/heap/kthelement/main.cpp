#include <bits/stdc++.h>
#include "use_sort.h"
#include "use_maxheap.h"
#include "use_minheap.h"
using namespace std;
//Kth smallest and kth largest element.
//implement min heap for kth largest element and max heap for kth smallest
int main()
{
  int k_largest, k_smallest;
  int k = 3;
  int arr[] = {2,3,1,9,6,4,5};
  int l = sizeof(arr)/sizeof(arr[0]);
  // use_sort(arr, l); //using sorted array we can easily do it. Complexity is nlogn
  k_largest = use_minheap(arr,l,k);
  k_smallest = use_maxheap(arr,l,k);

  cout<<"\n"<<k<<"th largest: "<<k_largest<<"\n";
  cout<<"\n"<<k<<"th smallest: "<<k_smallest<<"\n";


  return 0;
}
