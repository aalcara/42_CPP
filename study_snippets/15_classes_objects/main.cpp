#include <iostream>
#include <cmath>

using namespace std;

class Book {
	public:
		string title;
		string author;
		int pages;

		Book() {
			title = "no title";
			author = "no author";
			pages = 0;
		}

		Book(string a_title, string a_author, int a_pages) {
			title = a_title;
			author = a_author;
			pages = a_pages;
		}

};



int main()
{
	Book book1("Harry Potter", "JK Rowling", 500);
	Book book2("Lord of the rings", "Tolkein", 700);
	Book book3;

	cout << book3.author << endl;

	return 0;
}
