#include <iostream>
#include <cmath>

using namespace std;

class Chef {
	public:
		void makeChicken(){
			cout << "The chef makes chicken" << endl;
		}
		void makeSalad(){
			cout << "The chef makes salad" << endl;
		}
		void makeSpecial(){
			cout << "The chef makes bbq ribs" << endl;
		}
};

class ItalianChef : public Chef{
	public:
		void makePasta(){
			cout << "The chef makes pasta" << endl;
		}
		void makeSpecial(){
			cout << "The chef makes chicken parm" << endl;
		}
};

int main()
{
	Chef chef;
	chef.makeChicken();

	ItalianChef italianchef;
	italianchef.makeChicken();
	italianchef.makePasta();

	chef.makeSpecial();
	italianchef.makeSpecial();

	return 0;
}
