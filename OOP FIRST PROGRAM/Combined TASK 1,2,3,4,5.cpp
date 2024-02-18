//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstdlib> // For system specific commands
//using namespace std;
//
//class pet;
//class house;
//
//class house {
//public:
//    string house_name;
//
//    void take_info()
//    {
//        cout << "Enter the person's house name: ";
//        getline(cin, house_name);
//    }
//
//    void display_houseinfo()
//    {
//        cout << "Person's house name: " << house_name << endl;
//    }
//};
//
//class pet
//{
//public:
//    string name;
//    string breed;
//    int age;
//
//    void pet_info()
//    {
//        cout << "Enter name of the adorable pet dog: ";
//        cin >> name;
//        cout << "Enter the breed: ";
//        cin >> breed;
//        cout << "Enter age of " << name << ": ";
//        cin >> age;
//    }
//
//    void pet_info_display()
//    {
//        cout << "Meet his pet: " << name << endl;
//        cout << name << " Says woof woof!" << endl;
//        cout << name << " Is a dog of " << breed << " breed" << endl;
//        cout << "His age is " << age << endl;
//    }
//};
//
//class person
//{
//public:
//    string name;
//    int age;
//    pet dog;
//    house house1;
//
//    void intro()
//    {
//        cout << "Enter person name: ";
//        cin >> name;
//        cout << "Enter person age: ";
//        cin >> age;
//        cin.ignore(); // Ignore newline character after reading age
//        house1.take_info();
//        dog.pet_info();
//    }
//
//    void display()
//    {
//
//        cout << "House details: " << endl;
//        house1.display_houseinfo();
//        cout << "Person's name is " << name << endl;
//        cout << "Person's age is " << age << endl;
//        dog.pet_info_display();
//    }
//
//    void change_pet()
//    {
//        cout << "Changing the owner's dog..." << endl;
//        dog.pet_info(); // Take new pet information
//    }
//};
//
//class neighborhood {
//public:
//    vector<person> residents;
//
//    void add_resident() {
//        person new_resident;
//        new_resident.intro();
//        residents.push_back(new_resident);
//    }
//
//    void display_neighborhood() {
//        cout << "Neighborhood Information: " << endl;
//        for (int i = 0; i < residents.size(); ++i) {
//            cout << "Resident " << i + 1 << ":\n";
//            residents[i].display();
//            cout << "\t\t\t*********************\n";
//        }
//    }
//};
//
//void display_menu() {
//    cout << "======== Main Menu ========" << endl;
//    cout << "1. Add Resident" << endl;
//    cout << "2. Display Neighborhood" << endl;
//    cout << "3. Change Owner's Dog" << endl;
//    cout << "4. Clear Screen" << endl;
//    cout << "5. Exit" << endl;
//    cout << "===========================" << endl;
//    cout << "Enter your choice: ";
//}
//
//void start_program()
//{
//    char choice;
//    neighborhood my_neighborhood;
//
//    do {
//        display_menu();
//        cin >> choice;
//        cin.ignore();
//
//        switch (choice) {
//        case '1':
//            system("cls");
//            my_neighborhood.add_resident();
//            break;
//        case '2':
//            system("cls");
//            my_neighborhood.display_neighborhood();
//            break;
//        case '3':
//        {
//            int resident_number;
//            cout << "Enter resident number to change owner's dog: ";
//            cin >> resident_number;
//            cin.ignore();
//            if (resident_number >= 1 && resident_number <= my_neighborhood.residents.size()) {
//                my_neighborhood.residents[resident_number - 1].change_pet();
//            }
//            else {
//                cout << "Invalid resident number!" << endl;
//            }
//            break;
//        }
//        case '4':
//            system("cls");
//            break;
//        case '5':
//            cout << "Exiting program." << endl;
//            break;
//        default:
//            cout << "Invalid choice! Please try again." << endl;
//        }
//    } while (choice != '5');
//}
//
//int main()
//{
//    start_program();
//    return 0;
//}
