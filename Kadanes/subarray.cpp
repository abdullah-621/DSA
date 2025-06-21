#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / 4;

  for (int st = 0; st < n; st++)
  {
    for (int end = st; end < n; end++)
    {
      for (int k = st; k <= end; k++)
      {
        cout << arr[k];
      }
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}