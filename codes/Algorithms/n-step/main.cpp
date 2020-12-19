#include <iostream>
#include "recursion.h"
#include "dp_m.h"
#include "dp_t.h"
using namespace std;


int main()
{
  cout<< max_ways_r(5)<<"\n";
  cout<< max_ways_d_m(5)<<"\n";
  cout<< max_ways_d_t(5)<<"\n";
  return 0;
}
