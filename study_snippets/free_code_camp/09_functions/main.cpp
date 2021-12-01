#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age)
{
	cout << "Hello " << name << ". You are " << age << endl;
}

int main()
{
	sayHi("Mike", 42);
	sayHi("tom", 22);
	sayHi("Minie", 33);

	return 0;
}
