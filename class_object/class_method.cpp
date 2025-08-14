#include <iostream>
using namespace std;

class Myclass
{
    public:
    string name;
    int year;
    int age;

    Myclass(){
        age = 90;
    }

    void she()
    {
        cout << "This is inside class method" << endl << age;
    }

    void myMethod();
};

void Myclass::myMethod()
{
    cout << "This is my outside method" << endl;
}

int main() {
    Myclass myObj;
    myObj.myMethod();

    myObj.she();

    return 0;
}