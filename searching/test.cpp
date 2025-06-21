// // #include <iostream>
// // #include <vector>

// // using namespace std;

// // bool Is_sorted(vector<int> &arr, int n)
// // {

// //   bool flag = true;
// //   for (int i = 0; i < arr.size() - 1; i++)
// //   {
// //     if (arr[i] > arr[i + 1])
// //     {
// //       flag = false;
// //     }
// //   }
// //   if (flag)
// //     return true;
// //   else
// //     return false;
// // }

// // int main()
// // {

// //   vector<int> arr = {
// //       10,
// //       34,
// //       45,
// //       536,
// //       67,
// //       89,
// //       90,
// //   };

// //   bool sorted = Is_sorted(arr, 7);

// //   if (sorted)
// //   {
// //     cout << "true";
// //   }
// //   else
// //   {
// //     cout << "false";
// //   }

// //   return 0;
// // }
#include <iostream>
#include <vector>

using namespace std;

int Is_sorted(vector<int> &arr, int n)
{

  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}

int main()
{

  vector<int> arr = {1, 2, 3, 4, 5, 6, 6, 6};

  int k = Is_sorted(arr, 8);
  for (int i = 0; i < k; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 8; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}

// #include <bits/stdc++.h>

// using namespace std;
// int removeDuplicates(int arr[], int n)
// {
//   int i = 0;
//   for (int j = 1; j < n; j++)
//   {
//     if (arr[i] != arr[j])
//     {
//       i++;
//       arr[i] = arr[j];
//     }
//   }
//   return i + 1;
// }
// int main()
// {
//   int arr[] = {1, 1, 2, 2, 2, 3, 3,4,5,6};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   cout << n << endl;
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;

//   cout << k << endl;
//   for (int i = 0; i < k; i++)
//   {
//     cout << arr[i] << " ";
//   }
// }
