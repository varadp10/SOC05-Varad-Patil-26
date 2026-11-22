#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

// Derived from Vehicle
class Car : public Vehicle {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

// Derived from Car
class ElectricCar : public Car {
public:
    void charge() {
        cout << "Electric car is charging" << endl;
    }
};

int main() {
    ElectricCar e;

    e.start();   // from class Vehicle
    e.drive();   // from Car
    e.charge();  // from ElectricCar class

    return 0;
}
