#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//char grade = 'A';
	//int age = 50;
	//double gpa = 2.3;
	

	cout << 40 << endl;
	cout << 5 + 7 << endl;
	cout << 5 * 7 << endl;
	cout << 10 % 6 << endl;
	cout << 4 + 4 * 10 << endl;


	int wnum = 5;
	double dnum = 5.5;

	wnum++;
	cout << wnum << endl;

	wnum += 80;
	cout << wnum << endl;

	cout << 5.5 + 9 << endl;
	cout << 10 / 3 << endl;
	cout << 10.0 / 3 << endl;

	cout << endl;
	cout << "cmath include" << endl;
	cout << "pow(2, 5) = "<< pow(2, 5) << endl;
	cout << "pow(5, 2) = "<< pow(5, 2) << endl;
	cout << "sqrt(36) = "<< sqrt(36) << endl;
	cout << "round(4.6) = "<< round(4.6) << endl;
	cout << "round(4.2) = "<< round(4.2) << endl;
	cout << "ceil(4.2) = "<< ceil(4.2) << endl;
	cout << "floor(4.6) = "<< floor(4.6) << endl;
	cout << "fmax(3, 10) = " << fmax(3, 10) << endl;
	cout << "fmin(3, 10) = " << fmin(3, 10) << endl;
	
	


	return 0;
}
