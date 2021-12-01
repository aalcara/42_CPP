#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int age = 19;
	int *p_age = &age;
	double gpa = 2.7;
	double *p_gpa = &gpa;
	string name = "Mike";
	string *p_name = &name;
	cout << "Age : " << &age << endl;
	cout << "p_Age : " << p_age << endl;
	cout << "Gpa : " << &gpa << endl;
	cout << "p_Gpa : " << p_gpa << endl;
	cout << "Name : " << &name << endl;
	cout << "p_Name : " << p_name << endl;
	cout << "Name = " << *p_name << endl;

	return 0;
}
