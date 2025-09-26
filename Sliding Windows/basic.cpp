#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 3;

  int sum = 0, maxsum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  maxsum = sum;

  for (int i = n; i < arr.size(); i++)
  {
    sum = sum - arr[i - n] + arr[i];
    maxsum = max(sum, maxsum);
  }

  cout << maxsum << endl;

  return 0;
}