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

class masum : public employee
{
public:
  void showMasum()
  {
    cout << "Abdullah Al Masum" << endl;
  }
};

class noman : public masum{
  public :
    void showNoman()
    {
      cout << "Abdullah Al Noman" << endl;
    }
};


int main()
{
  masum man1;
  noman man2;

  man1.show();
  man2.showMasum();
  man2.showNoman();

  return 0;
}
