# Knapsack 0-1 problem

For checking whether any problem is a dp or not check for two things:

1. Is there a choice, ex. in case of knapsack we have a choice whether to include the item or not
2. Is it asking for any optimal condition. If yes than it is a dp question.

Now for any dp problem the parent problem is always recursion. So before solving it directly b making dp table first think of it's recursive solution.  For any recursive problem, we can write it in following way:
```
return_type func()
{
  [Base condition]
  [Choice Diagram condition]
}
0.
```

The most important property of a recursive function is that we have to decrement the input in a recursive problem.  so if we have func(n) then it shoul call func(n-1).

1. Base condition: An easy determination for base condition is to check the value of function at its smallest input.
Ex. in Knapsack case we have following input
* wt[]: weight array = [a,b,c,d,e,f]
* val[]: value array = [x,y,z,p,q,r]
* W: capacity = C kg

Now the minimum input which can be possible is that there are no items, and then the capacity be 0.
So min condition will be:
* n = 0
* W = 0  

And as a result the output which is the profit will be 0. So we can write the base condition as:
```
if(n==0 || W == 0)
{
  return 0
}
```

2. Choice diagram: The second thing to write a recursive function is the representation of a choice diagram. So for any particular item we have following choice:

if weight of item more than capacity then we can't include the item, else if it's less, there can be two possibilities either we can include the item or not include.
```
if(wt[n-1]<=W)
{
  return(max(condition if item included, condition if item not included))
}
else(if wt[n-1] > capacity )
{
  return (item not included)
}
```
