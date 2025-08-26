#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> arr = {10, 5, 6, 2};
  vector<int> brr = {12, 7, 9};

  vector<int> ans = arr;
  ans.insert(ans.end(),brr.begin(), brr.end());

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  
  return 0;
}