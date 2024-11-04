#include <iostream>
#include <string>
using namespace std;

class Author {
public:
	string imie, nazwisko;

	Author() : imie(""), nazwisko("") {} // konstruktor domyślny;
	Author(const string& i, const string& n) {
		this->imie = i;
		this->nazwisko = n;
	}

	void display() const {
		cout << "Autor: " << this->imie << " " << this->nazwisko << endl;
	}
};

class Book {
public:
	string title;
	Author author;
	Book(const string& t, const Author& a) : title(t), author(a) {}
	void display() const {
		cout << "Tytul: " << title << endl;
		author.display();
	}
};
int main()
{
	Author author("Andrzej", "Sapkowski");
	Book book("Wiedzmin: Ostatnie zyczenie", author);
	book.display();

	return 0;

}