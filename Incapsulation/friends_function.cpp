#include <iostream>
using namespace std;

class employee
{
private:
  int salary;

public:
  employee(int s)
  {
    salary = s;
  }
  friend void displaySalary(employee emp);
};

void displaySalary(employee emp)
{
  cout << "Salary : " << emp.salary << endl;
}

int main()
{
  employee masum(100000);
  displaySalary(masum);

  return 0;
}
