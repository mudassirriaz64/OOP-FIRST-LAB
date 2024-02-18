#include<iostream>
using namespace std;

class neighborhood
{
public:
	int house_number;
};
class house
{
public:
	string house_address;
	int living_year;
};

class pet
{
	string name;
	int age;
};
class person
{
	string name;
	house address;
	pet dog;
	neighborhood house;
};

int main()
{
	neighborhood house_number_1;
	neighborhood house_number_2;
	neighborhood house_number_3;
	person person1;
	person person2;
	person person3;
	person1.house_number.house_number = 1;
}