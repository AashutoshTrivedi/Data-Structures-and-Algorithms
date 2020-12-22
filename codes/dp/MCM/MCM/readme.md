# Matrix chain multiplication

Consider the arr = {a,b,c,d,e};
1. Step 1 was to find i and j.

Size of A1 = arr[i-1]*arr[i]
so i has to start  with index 1;

Now lets check for j,

Aj = =arr[j-1]*arr[j] take j = 4, i.e last element in array.
A4 = arr[4-1]*arr[4] - no problem for j.

2. Step 2 is  to find the base condition.
now for this i>j. But can i == j. lets check:
if this is case then size of arr will be 1 and so size of Ai is not possible s we can't have i==j or i>j.

i>j ==> size 0

i==j ==> size 1 which is also not possible 
