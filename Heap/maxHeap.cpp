#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
class MaxHeap
{
private:
  int *arr;
  int size;       // total elemetn present
  int total_size; // total size of array

public:
  MaxHeap(int n)
  {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  // Insertion

  void Insert(int value)
  {
    // if heap size is avaiable or not
    if (size == total_size)
    {
      cout << "Heap Overflow\n";
      return;
    }

    arr[size] = value;
    int index = size;
    size++;
    cout << value << " insert on heap\n";

    // get parent = (index - 1) / 2
    // insert the value into right position

    while (index > 0 && value > arr[(index - 1) / 2])
    {
      swap(arr[index], arr[(index - 1) / 2]);
      index = (index - 1) / 2;
    }
  }

  // deletation
  void heapify(int index)
  {
    int largest = index;
    int left_child = (2 * index) + 1;
    int right_child = (2 * index) + 2;

    if (left_child < size && arr[largest] < arr[left_child])
    {
      largest = left_child;
    }
    if (right_child < size && arr[largest] < arr[right_child])
    {
      largest = right_child;
    }

    // it means parent is highest or not if parent highest then no swap
    if (largest != index) 
    {
      swap(arr[largest], arr[index]);
      heapify(largest);
    }
  }

  void Delete()
  {
    if (size == 0)
    {
      cout << "Heap is empty !" << endl;
      return;
    }

    cout << "Deleted " << arr[0] << " from heap\n";
    ans.push_back(arr[0]);
    arr[0] = arr[size - 1];
    size--;

    heapify(0);
  }

  void print()
  {
    if (size == 0)
    {
      cout << "Heap is empty !" << endl;
      return;
    }
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  MaxHeap heap(10);

  heap.Insert(10);
  heap.Insert(1);
  heap.Insert(100);
  heap.Insert(20);
  heap.Insert(2);
  heap.Insert(3);
  heap.print();
  heap.Delete();
  heap.Delete();
  heap.Delete();
  heap.Delete();
  heap.Delete();
  heap.Delete();

  heap.print();

  for (int i : ans)
    cout << i << " ";

  return 0;
}

// time complixity O(nlogn)