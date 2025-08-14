

#include <iostream>
using namespace std;

class employee
{
private:
  int salary;

  public:
  void setSalary(int s)
  {
    salary = s;
  }

  int getSalary()
  {
    return salary;
  }
};

int main()
{
  employee masum;
  masum.setSalary(100000);
  cout << masum.getSalary();

  return 0;
}
