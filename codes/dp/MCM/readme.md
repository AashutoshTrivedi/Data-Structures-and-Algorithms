# MCM pattern and related questions

## Identification
To identify a problem is whether of MCM or the first thing is that it should belong to the category of array or string. In this categorization we see that we have two index i and j one being left index and another being right index. We take a index k in between i and j such that we create two subproblems from i to k and k+1 to j and these gives temporary ans. We use these temp ans and input in a function to return final ans.

We'll see the recursive and memoized version
## Format
```
int solve(int arr[], int i, int j)
{
  [[Base Condition --> Think of the smallest valid input or think of the invalid input]
  if(i>j)-->invalid condition to get bc;
  {
    return 0;
  }
  [[choice diagram]
  for(int k = i;l<j;k++)
  {
    tempans = solve(arr,i,k) (+,-,..) solve(arr,k+1,j);
    ans = func(tempans);
  }
  ]
}
```

Step 1: Find i and j which satisfies the conditions
Step 2: Find base conditions
Step 3: Find k loop scheme
Step 4: Calculate ans from temp ans

## Problems based on MCM

 * MCM
 * Printing MCM
 * Evaluate expression to true/boolean parenthesization
 * min/max value of expression
 * Palindrome partitioning
 * scramble string
 * Egg dropping Problem 
