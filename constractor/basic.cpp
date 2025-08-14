// #include <iostream>
// using namespace std;

// class car
// {
// public:
//   car()
//   {
//     cout << "A constructor is a special method that is automatically called when an object of a class is created." << endl;
//   }
// };

// int main()
// {

//   car mycar;

//   return 0;
// }

#include <iostream>
// #include <format>
using namespace std;

class car
{
  public:
  string brand;
  string model;
  int year;

  
  // car(string a, string b, int c){
    
  //   brand = a;
  //   model = b;
  //   year = c;
  // }

  // todo:  then use this keyword when class attruibute and contractor parameter name are same

  car(string brand, string model, int year){

    this->brand = brand;
    this->model = model;
    this->year = year;
  }
};

int main() {

  car carOne("BMW", "X5", 2007);
  car cartwo("Ford", "Y5", 2009);

  cout << carOne.brand << " "<< carOne.model << " "<< carOne.year << endl;
  cout << cartwo.brand << " "<< cartwo.model << " "<< cartwo.year << endl;

  return 0;
}
