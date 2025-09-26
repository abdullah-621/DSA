#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &dp)
{
  if (n <= 1)
  {
    return dp[n] = n;
  }

  if (dp[n] != -1)
  {
    return dp[n];
  }

  return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main()
{
  int n = 5;
  vector<int> dp(n + 1, -1);
  cout << fib(n, dp) << endl;

  for (int i : dp)
  {
    cout << i << endl;
  }

  return 0;
}