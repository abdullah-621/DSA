#include <iostream>
using namespace std;

class employee
{
public:
  void show()
  {
    cout << "This is employee class" << endl;
  }
};

// this is inheritance class method
class masum : public employee
{
public:
  string s = "Abdullah";
};

int main()
{
  masum man1;
  man1.show();

  return 0;
}
