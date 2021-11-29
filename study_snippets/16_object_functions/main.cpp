#include <iostream>
#include <cmath>

using namespace std;

class Student {
	public:
		string name;
		string major;
		double gpa;

		Student(string a_name, string a_major, double a_gpa) {
			name = a_name;
			major = a_major;
			gpa = 0;
			set_gpa(a_gpa);
		}

		void set_gpa(double a_gpa) {
			if ( 0.0 <= a_gpa && a_gpa <= 5.0)
			{
				gpa = a_gpa;
			} 
		}

		bool has_honors() {
			if (gpa >= 3.5) {
				return true;
			}
			return false;
		}


};



int main()
{
	Student student1("Jim", "Business", -2.4);
	Student student2("Pam", "Art", 3.6);
	
	
	cout << student1.gpa << endl;

	return 0;
}
