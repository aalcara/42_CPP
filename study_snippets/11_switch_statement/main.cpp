#include <iostream>
#include <cmath>

using namespace std;

string get_day_week(int day_num) {
	string day_name;

	switch(day_num){
	case 0:
		day_name = "Sunday";
		break;
	case 1:
		day_name = "Monday";
		break;
	case 2:
		day_name = "Tuesday";
		break;
	case 3:
		day_name = "Wensday";
		break;
	case 4:
		day_name = "Thursday";
		break;
	case 5:
		day_name = "Friday";
		break;
	case 6:
		day_name = "Saturday";
		break;
	default:
		day_name = "invalid day number";
	}

	return day_name;
}

int main()
{
	cout << get_day_week(10);
	return 0;
}
