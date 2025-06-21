#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int n = sizeof(arr) / 4;

  int max_sum = INT16_MIN;
  for (int st = 0; st < n; st++)
  {
    int current_sum = 0;

    for (int end = st; end < n; end++)
    {
      current_sum += arr[end];
      max_sum = max(current_sum, max_sum);
    }
  }
  cout << "The Max Subarray Sum is:" << max_sum << endl;

  return 0;
}

