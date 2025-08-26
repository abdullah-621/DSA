#include <iostream>
using namespace std;

class MyOperator
{
public:
  bool operator()(int a, int b)
  {
    return a > b;
  }
};

int main()
{

  MyOperator adder;

  int ans = adder(10, 8);

  cout << ans << endl;

  return 0;
}