#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {

    int mini = i;

    for (int j = i + 1; j < n; j++)
    {
      if (arr[mini] > arr[j])
      {
        mini = j;
      }
    }
    swap(arr[i], arr[mini]);
  }

  cout << "After Selection Sort : " << endl;
  for (int k = 0; k < n; k++)
  {
    cout << arr[k] << " ";
  }
}

int main()
{
  int n;
  cout << "Enter number of element : ";
  cin >> n;
  int arr[n];

  cout << "Enter Element : ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Before Selection Sort : " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  selection_sort(arr, n);
}