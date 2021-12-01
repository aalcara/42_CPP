#include <iostream>

using namespace std;

int main()
{
	string phrase = "Giraffe Academy";
	cout << "phrase = " << phrase << endl;
	cout << "phrase.length() = " << phrase.length() << endl;
	cout << "phrase[0] = "<< phrase[0] << endl;
	cout << "phrase[2] = "<< phrase[2] << endl;

	phrase[0] = 'B';
	cout << "phrase[0] = 'B'; phrase = " << phrase << endl;

	phrase = "Giraffe Academy";
	cout << "phrase.find(\"ffe\") = " << phrase.find("ffe") << endl;
	cout << "phrase.substr(8, 3) = " << phrase.substr(8, 3) << endl;

	string phrase_sub;
	phrase_sub = phrase.substr(4, 8);
	cout << "phrase.substr(4, 8) = " << phrase_sub << endl;
	return 0;
}
