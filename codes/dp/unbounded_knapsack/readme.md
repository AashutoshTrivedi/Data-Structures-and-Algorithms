# Unbounded knapsack and related problems

1) Rod cutting
2) coin change 1
3) coin change 2
4) Maximum ribbon cut

In an unbounded knapsack the only difference is that we do not have a constraint in the no of items of type x. We can take as many items until the condition is satisfied.
So if an item is picked, then the possibility is whether to pick that again or not.

It's choice diagram will be as follows:

if(wt[item] <= capacity left)
{
  return( max (item picked and and check for this item again), item not picked and checked for n-1);
}
else
{
  return item not picked
}
