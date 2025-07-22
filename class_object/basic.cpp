#include <iostream>
using namespace std;

class Book
{
  public:
  string title;
  string outher;
  int year;
};


int main() {

  Book master;
  int timeline;

  master.outher = "Jahangir Alam";
  master.title = "English";
  master.year = 2015;

  cout << master.outher << endl
       << master.title << endl
       << master.year << endl;
  return 0;
}