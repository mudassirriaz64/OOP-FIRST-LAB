//#include <iostream>
//#include <string>
//using namespace std;
//
//class Vehicle {
//private:
//    string make;
//    string model;
//    int year;
//    int mileage;
//
//public:
//    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr), mileage(11000) {}
//
//    void setMake(string mk) 
//    {
//        make = mk;
//    }
//
//    void setModel(string mdl) 
//    {
//        model = mdl;
//    }
//
//    void setYear(int yr) {
//        year = yr;
//    }
//
//    void setMileage(int miles) 
//    {
//        mileage = miles;
//    }
//
//    void displayVehicleInfo() {
//        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << " miles" << endl;
//    }
//
//    bool needsServicing() {
//        return mileage >= 10000;
//    }
//};
//
//int main() {
//    Vehicle myVehicle("Toyota", "Corolla", 2020);
//    myVehicle.displayVehicleInfo();
//
//    myVehicle.setModel("Camry");
//    myVehicle.setYear(2021);
//
//    myVehicle.setMileage(8000);
//
//    myVehicle.displayVehicleInfo();
//
//    if (myVehicle.needsServicing()) {
//        cout << "Car needs servicing." << endl;
//    }
//    else {
//        cout << "Car doesn't need servicing." << endl;
//    }
//
//    return 0;
//    system("pause");
//}