

#include <iostream>
using namespace std;

class car
{
public:
  string brand;
  string model;

  // then use this keyword when class attruibute and contractor parameter name are same

  car(){
    brand = "Unknown";
    model = "Unknown";
  
  };

  car(string brand, string model)
  {

    this->brand = brand;
    this->model = model;
  
  }
};

int main()
{

  car carOne;
  car cartwo("Ford", "Y5");

  cout << carOne.brand << " " << carOne.model << " " << endl;
  cout << cartwo.brand << " " << cartwo.model << " " << endl;

  return 0;
}
