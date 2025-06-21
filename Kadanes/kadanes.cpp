#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int n = sizeof(arr) / 4;

  int max_sum = INT16_MIN;
  int Current_sum = 0;
  
  for (int st = 0; st < n; st++)
  {
    Current_sum += arr[st];
    max_sum = max(Current_sum, max_sum);

    if (Current_sum < 0)
    {
      Current_sum = 0;
    }
  }
  cout << "The Max Subarray Sum is:" << max_sum << endl;

  return 0;
}