#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string age;
	cout << "enter your age: ";
	getline(cin, age);

	cout << "You are " << age << " years old" << endl; 
	
	string name;
	cout << "enter your name: ";
	getline(cin, name);

	cout << "Hello, " << name << endl; 

	return 0;
}
