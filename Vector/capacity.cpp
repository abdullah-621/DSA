#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> vec;
  cout << "size = " << vec.size() << endl;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);

  cout << "size = " << vec.size() << endl;

  cout << "capacity = " << vec.capacity() << endl;
  vec.push_back(6);
  cout << "capacity = " << vec.capacity() << endl;
  vec.push_back(8);
  cout << "capacity = " << vec.capacity() << endl;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  cout << "capacity = " << vec.capacity();
  
  return 0;
}