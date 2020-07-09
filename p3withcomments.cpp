#include <iostream>
#include <string> // including the strings library
using namespace std;

int main()
{
    /* creating the structure with 2 strings and 1 integer*/
	struct person  // structure name is person
	{
		string first_name; // first string it their first name
		string last_name; // second string is their last name
		int age; // the integer is their age
	};

	person x, y, z; // devlaring 3 members of the person structure
	
	cout << "Please enter the first name, last name and age of the first person: " << endl;
	cin >> x.first_name >> x.last_name >> x.age; //requesting the information of the first person and adding it to the structure
	cout << "Please enter the first name, last name and age of the second person: " << endl;
	cin >> y.first_name >> y.last_name >> y.age;// same as above
	cout << "Please enter the first name, last name and age of the third person: " << endl;
	cin >> z.first_name >> z.last_name >> z.age;// same as above

/* outputing the results of the input using the structure*/
	cout << "first name of the first person:" << x.first_name << " " << "with the last name: " << x.last_name << " " << "and their age is: " << x.age << endl;
	cout << "first name of the second person:" << y.first_name << " " << "with the last name: " << y.last_name << " " << "and their age is: "  << y.age << endl;
	cout << "first name of the third person:" << z.first_name << " " << "with the last name: " << z.last_name << " " << "and their age is: "  << z.age << endl;

}