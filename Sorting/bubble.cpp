#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1 ; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  cout << "After Bubble Sort : " << endl;
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

  cout << "Before Bubble Sort : " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  bubble_sort(arr, n);
}