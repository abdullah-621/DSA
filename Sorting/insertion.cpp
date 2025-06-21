#include <iostream>
using namespace std;

void Insertion_sort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int j = i - 1;
    int key = arr[i];

    while (j >= 0 && arr[j] < key)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
void print_arr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[5] = {0, 11, 13, 5, 6};
  cout << "Before Sorting =>" << endl;
  print_arr(arr, 5);
  Insertion_sort(arr, 5);
  cout << endl
       << "After Sorting =>" << endl;
  print_arr(arr, 5);

  return 0;
}