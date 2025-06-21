// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target)
// {
//   vector<int> ans;
//   int n = nums.size();

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (nums[i] + nums[j] == target)
//       {
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//       }
//     }
//   }
// }

// int main()
// {
//   vector<int> arr = {2, 11, 7, 15};
//   int target = 9;

//   vector<int> ans = pairSum(arr, target);
//   cout << "The Pair is:" << "(" << ans[0] << "," << ans[1] << ")";

//   return 0;
// }

// Most optimize time complexity(n)
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
  vector<int> ans;
  int n = nums.size();

  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    if (nums[i] + nums[j] < target)
    {
      i++;
    }
    else if (nums[i] + nums[j] > target)
    {
      j--;
    }
    else
    {
      ans.push_back(i);
      ans.push_back(j);
      return ans;
    }
  }
}

int main()
{
  vector<int> arr = {2, 11, 7, 15};
  int target = 9;

  vector<int> ans = pairSum(arr, target);
  cout << "The Pair is:" << "(" << ans[0] << "," << ans[1] << ")";

  return 0;
}
