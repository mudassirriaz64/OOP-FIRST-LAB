#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int mileage;

public:
    Car() {}

    void setBrand(string br) {
        brand = br;
    }

    void setModel(string mdl) {
        model = mdl;
    }

    void setYear(int yr) {
        year = yr;
    }

    void setMileage(int miles) {
        mileage = miles;
    }

    void displayCarInfo() {
        cout << "\n\n";
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << " miles" << endl;
    }

    void checkServiceNeeded() {
        if (mileage >= 10000) {
            cout << "Your car needs servicing." << endl;
        }
        else {
            cout << "Your car does not need servicing." << endl;
        }
    }
};

int main() {
    Car myCar;
    string br, mdl;
    int yr, miles;

    cout << "Enter Brand of the car: ";
    cin >> br;
    myCar.setBrand(br);

    cout << "Enter Model of the car: ";
    cin >> mdl;
    myCar.setModel(mdl);

    cout << "Enter Year of the car: ";
    cin >> yr;
    while (cin.fail() || yr < 0 || yr > 2024) {
        cout << "Invalid input. Please enter a valid year: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> yr;
    }
    myCar.setYear(yr);

    cout << "Enter Mileage of the car: ";
    cin >> miles;
    while (cin.fail() || miles < 0) {
        cout << "Invalid input. Please enter a valid mileage: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> miles;
    }
    myCar.setMileage(miles);

    myCar.displayCarInfo();
    myCar.checkServiceNeeded();

    return 0;
}
