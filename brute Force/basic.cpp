#include <iostream>
#include <vector>
using namespace std;
int main()
{

  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;

    vector<int> nums;
    int count_dgt = 0;

    while (N != 0)
    {
      int rem = N % 10;
      N /= 10;
      nums.push_back(rem);
      count_dgt++;
    }

    bool findZero = true;
    for (int value : nums)
    {
      if (value == 0 && findZero)
      {
        continue;
      }
      else
      {
        findZero = false;
        cout << value;
      }
    }
    cout << endl;
  }

  return 0;
}

