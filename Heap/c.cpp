#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  arr[0] = arr[4];
  for (int i : arr)
    cout << i << " ";
  return 0;
}