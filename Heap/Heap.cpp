#include <iostream>
using namespace std;

void Heapify(int arr[], int index, int n)
{
  int largest = index;
  int left_child = 2 * index + 1;
  int right_chile = 2 * index + 2;

  if (left_child < n && arr[left_child] > arr[largest])
  {
    largest = left_child;
  }
  if (right_chile < n && arr[right_chile] > arr[largest])
  {
    largest = right_chile;
  }

  if (largest != index)
  {
    swap(arr[largest], arr[index]);
    Heapify(arr, largest, n);
  }
  
}

void BuildMaxHeap(int arr[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    Heapify(arr, i, n);
  }
}

void printHeap(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    cout << arr[i] << ' ';

  cout << endl;
}

int main() {
  int arr[] = {10, 30, 50, 3, 67, 89, 32, 89, 100, 200};

  BuildMaxHeap(arr, 10);

  printHeap(arr,10);
  return 0;
}

// time complxity O(n)