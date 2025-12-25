//Class is a way of binding different types of data types and 
// its associated data members in single unit which allows data and functions
// to be hidden from external world if required.
// user defined data type and just a blueprint, No memory allocation untill object created.
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:      // Access specifier
    string engineType;       
    int numberOfWheels;       
    float maxSpeed;           
    float fuelTankCapacity;   
    string bharatStage;       

public:      // Access specifier
    void getdata() {
        cout << "Enter engine type: ";
        cin >> engineType;

        cout << "Enter number of wheels: ";
        cin >> numberOfWheels;

        cout << "Enter max speed: ";
        cin >> maxSpeed;

        cout << "Enter fuel tank capacity: ";
        cin >> fuelTankCapacity;

        cout << "Enter Bharat Stage: ";
        cin >> bharatStage;
    }

    void putdata() const {
        cout << "\n--- Vehicle Specifications ---\n";
        cout << "Engine Type      : " << engineType << endl;
        cout << "Wheels           : " << numberOfWheels << endl;
        cout << "Max Speed        : " << maxSpeed << " km/h" << endl;
        cout << "Fuel Tank        : " << fuelTankCapacity << endl;
        cout << "Bharat Stage     : " << bharatStage << endl;
    }
};

int main()
{
    Vehicle V1;
    V1.getdata();
    V1.putdata();

    return 0;
}