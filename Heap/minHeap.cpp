#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
class Minheap
{
  private:
    int *arr;
    int size;
    int total_size;

  public:
  Minheap(int n)
  {
    arr = new int[n];
    size = 0;
    total_size = n;
  }

  // insertion
  void insert(int data)
  {
    if (size == total_size)
    {
      cout << "Heap is Overflow\n";
      return;
    }

    arr[size] = data;
    int index = size;
    size++;
    cout << data << " insert into Heap\n";

    while (index > 0 && arr[index] < arr[(index - 1) / 2])
    {
      swap(arr[index], arr[(index - 1) / 2]);
      index = (index - 1) / 2;
    }
  }

  void heapify(int index)
  {
    int lowest = index;
    int left_child = (2 * index) + 1;
    int right_child = (2 * index) + 2;

    if (left_child < size && arr[lowest] > arr[left_child])
    {
      lowest = left_child;
    }

    if (right_child < size && arr[lowest] > arr[right_child])
    {
      lowest = right_child;
    }
    
    if (index != lowest)
    {
      swap(arr[index], arr[lowest]);
      heapify(lowest);
    }
  }

  void Delete()
  {
    if (size == 0)
    {
      cout << "Heap is empty !" << endl;
      return;
    }

    cout << "Delete " << arr[0] << " from heap" << endl;
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
  Minheap heap(6);
  heap.insert(50);
  heap.insert(40);
  heap.insert(10);
  heap.insert(60);
  heap.insert(5);
  heap.print();
  heap.Delete();
  heap.Delete();
  heap.Delete();
  heap.Delete();
  heap.Delete();

  for(int i : ans)
    cout << i << " ";

  return 0;
}