#include <iostream>
using namespace std;

void devide_sort(int arr[], int first, int last)
{
  int mid = (first + last) / 2;
  cout << arr[mid];
}

int main()
{
  int n = 5;
  int arr[] = {5, 4, 3, 2, 1};

  devide_sort(arr, 0, n);

  for (int i : arr)
  {
    cout << i << " ";
  }
}