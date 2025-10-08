#include <iostream>
using namespace std;

// time complxity avarage case O(nlogn) space O(logn)
// worst case O(n^2) space O(n) (when array ia already sorted (descending or ascending))

int pertition(int arr[], int start, int end)
{
  int pos = start;

  for (int i = start; i <= end; i++)
  {
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }

  // swap(arr[pos], arr[end]);
  return pos - 1;
}

void quicksort(int arr[], int start, int end)
{
  if(start >= end)
    return;
  int pivot = pertition(arr, start, end);

  // go left part
  quicksort(arr, start, pivot - 1);
  // gor right part
  quicksort(arr, pivot + 1, end);
}

int main()
{
  int arr[] = {5, 1, 4, 6, 8, 9, 3, 121, 90};

  quicksort(arr, 0, 9);

  for (int i = 0; i < 9; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}