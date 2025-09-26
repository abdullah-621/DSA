#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
using namespace std;

int main()
{
  int n = 5;
  vector<int> dp(n + 1, - 1);
  dp[0] = 0;
  dp[1] = 1;

  for (int i = 2; i < dp.size(); i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  for(int i : dp)
  {
    cout << i << " ";
  }
  return 0;
}
