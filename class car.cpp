#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    // Constructor to initialize the data members
    Car(string b, string m, float p, int mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }

    // Function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function to drive the car and increase mileage
    void drive(int distance) {
        mileage += distance;
        cout << "Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Creating a Car object with given details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Display car details
    myCar.display();

    // Simulate driving for 150 miles
    myCar.drive(150);

    // Simulate driving for 300 miles
    myCar.drive(300);

    return 0;
}
