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


class masum 
{
public:
  void showMasum()
  {
    cout << "Abdullah Al Masum" << endl;
  }
};

// multiple inheritance
class noman : public employee , public masum
{
public:
  void showNoman()
  {
    cout << "Abdullah Al Noman" << endl;
  }
};

int main()
{
  masum man1;
  noman man2;

  man2.show();
  man2.showMasum();
  man2.showNoman();

  return 0;
}
