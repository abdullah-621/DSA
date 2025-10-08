#include <iostream>
#include <vector>
using namespace std;

// time complixity O(nlogn)
// space complixity O(n)

void merge(int arr[], int start, int mid, int end)
{
  vector<int> temp(end - start + 1);
  int left = start;
  int right = mid + 1;
  int index = 0;

  while (left <= mid && right <= end)
  {
    if (arr[left] >= arr[right])
    {
      temp[index++] = arr[left++];
    }
    else
    {
      temp[index++] = arr[right++];
    }
  }

  // if left array is remain any value
  while(left <= mid)
  {
    temp[index++] = arr[left++];
  }

// if right array is remain any value
  while(right <= end)
  {
    temp[index++] = arr[right++];
  }

  // put this value into original array
  index = 0;
  while (start <= end)
  {
    arr[start++] = temp[index++];
  }
  
}

void mergesort(int arr[], int start, int end)
{
  if (start == end)
    return;
  int mid = start + (end - start) / 2;

  mergesort(arr, start, mid);
  mergesort(arr, mid + 1, end);

  merge(arr, start, mid, end);
}

int main()
{
  int n = 5;
  int arr[] = {5, 4, 3, 2, 1};

  mergesort(arr, 0, n - 1);

  for (int i : arr)
  {
    cout << i << " ";
  }
}