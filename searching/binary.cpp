#include <iostream>
using namespace std;

int binary_search(int arr[], int data, int n)
{

  int l = 0;
  int r = n - 1;

  while (l <= r)
  {
    int mid = (l + r) / 2;
    if (data == arr[mid])
      return mid;
    else if (data < arr[mid])
      r = mid - 1;
    else
      l = mid + 1;
  }
  return -1;
}

int main()
{

  int arr[] = {
      1,
      34,
      45,
      56,
      67,
      89,
      90,
  };
  int data;
  cout << "Enter searching data : ";
  cin >> data;

  int n = sizeof(arr) / sizeof(arr[0]);

  int index = binary_search(arr, data, n);

  if (index != -1)
  {
    cout << endl
         << "Index is : " << index << endl
         << endl;
  }
  else
  {
    cout << endl
         << "Data not found" << endl
         << endl;
  }

  return 0;
}
