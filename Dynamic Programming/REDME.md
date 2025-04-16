 What is Dynamic Programming?
Dynamic Programming is a method for solving complex problems by breaking them down into simpler subproblems and saving the results of these subproblems to avoid redundant computations.

It’s usually used in optimization problems (e.g. maximize/minimize/count ways).

🔹 When to Use DP?
Ask yourself:

Can I break the problem into subproblems?

Do the subproblems overlap (get repeated)?

Can I store and reuse results (memoize)?

If YES to all → You can use DP.

🔹 DP Types
1. Top-down (Memoization)
Recursion + Caching

Start from the original problem and solve smaller subproblems as needed

js
Copy
Edit
// Example: Fibonacci
const dp = {};
function fib(n) {
  if (n <= 1) return n;
  if (dp[n] !== undefined) return dp[n];
  return dp[n] = fib(n - 1) + fib(n - 2);
}
2. Bottom-up (Tabulation)
Iterative

Solve all subproblems first, then build the final solution from them

js
Copy
Edit
function fib(n) {
  const dp = [0, 1];
  for (let i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }
  return dp[n];
}
🔹 Common Patterns
0/1 Knapsack

Subset Sum

Fibonacci Sequence

Longest Common Subsequence

Edit Distance

Minimum Path Sum in Grid

Unique Paths

Partition Equal Subset Sum

🔹 Steps to Solve DP Problems
1. Define the State
What parameters define a subproblem?

e.g., dp[i][j] = result using first i items with weight j

2. State Transition (Recurrence)
How do you build larger solutions from smaller ones?

e.g., dp[i][j] = dp[i-1][j] || dp[i-1][j - arr[i]]

3. Base Case(s)
What’s the smallest subproblem, and what's the answer?

e.g., dp[0][0] = true

4. Final Answer
Where is the result in the table?

e.g., return dp[n][target]

🔹 Real World Analogy
Imagine calculating all the ways to climb stairs where you can take 1 or 2 steps at a time.

Without DP: You try every possibility recursively, recalculating the same subproblems over and over.

With DP: You store results for each step and reuse them, making it super fast.

TL;DR Summary

Concept	Meaning
DP	Break problems into overlapping subproblems
Memoization	Recursive + cache
Tabulation	Iterative + table
Goal	Avoid repeated work, optimize performance
