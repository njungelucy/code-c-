/*Function on classes
Lucy Njunge
BSCIT-01-0156/2024
*/
#include <iostream>
using namespace std;

class cylinder {
public:
    double radius;
    double height;
    double pi = 3.142;

    double calculateArea() {
        return pi * radius * radius;
    }

    double calculateVolume() {
        return pi * radius * radius * height;
    }
};

int main() {
    cylinder cylinder1;
    cylinder1.radius = 2;
    cylinder1.height = 15;
    cylinder1.pi = 3.142;

    double volume, area;
    volume = cylinder1.calculateVolume();  
    area = cylinder1.calculateArea();  

    cout << "Volume: " << volume << endl; 
    cout << "Area: " << area << endl; 

    return 0;
}

