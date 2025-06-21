#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> vec;

  cout << "Size = " << vec.size() << endl; //size of vector array

  vec.push_back(20);
  vec.push_back(30); // pushing element
  vec.push_back(40);

  cout << "Size after pushing element = " << vec.size() << endl;

  vec.pop_back(); // deleting element
  cout << "Size after pop back = " << vec.size() << endl;

  for (int value : vec) //index value
  {
    cout << value << endl;
  }

  cout << vec.front() << " "; // print first element
  cout << vec.back() <<" ";  // print last element
  cout << vec.at(1); //print index value

  return 0;
}

class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int index = 0;
    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == target)
      {
        index = i;
        flag = true;
      }
    }
    if (flag == false)
    {
      int temp = 0;
      for (int j = 0; j < nums.size(); j++)
      {
        if (nums[j] < target)
        {
          temp++;
        }
        else
        {
          return temp;
        }
      }
    }
    return index;
  }
};