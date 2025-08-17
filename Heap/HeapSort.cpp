// #include <iostream>
// using namespace std;

// void Heapify(int arr[], int index, int n)
// {
//   int largest = index;
//   int left = index * 2 + 1;
//   int right = index * 2 + 2;

//   if (left < n && arr[left] > arr[largest])
//   {
//     largest = left;
//   }
//   if (right < n && arr[right] > arr[largest])
//   {
//     largest = right;
//   }

//   if (largest != index)
//   {
//     swap(arr[largest], arr[index]);
//     Heapify(arr, largest, n);
//   }
// }

// void BuildMaxHeap(int arr[], int n)
// {
//   for (int i = n / 2 - 1; i >= 0; i--)
//   {
//     Heapify(arr, i, n);
//   }
// }

// void printHeap(int arr[], int n)
// {
//   for (int i = 0; i < n; i++)
//     cout << arr[i] << ' ';

//   cout << endl;
// }

// // 100 40 20 60 80 34 56 78 29 10

// void HeapSort(int arr[], int n)
// {
//   for (int i = n - 1; i > 0; i--)
//   {
//     swap(arr[i], arr[0]);
//     Heapify(arr, 0, i);
//   }
  
// }

// int main()
// {

//   int arr[] = {100, 40, 20, 60, 80, 34, 56, 78, 29, 10};

//   BuildMaxHeap(arr, 10);
//   printHeap(arr, 10);
//   HeapSort(arr, 10);
//   printHeap(arr, 10);

  
//   return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
  vector<int> nums = {40, 10, 30, 50};

  // Max-heap priority queue
  priority_queue<int> pq(nums.begin(), nums.end());

  // top element দেখানো
  cout << "Top element: " << pq.top() << endl; // 50

  // সব element বের করা
  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }

  return 0;
}
