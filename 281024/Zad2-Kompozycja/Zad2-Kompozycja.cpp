#include <iostream>
#include <string>
using namespace std;

class Address {
public:
	string city;
	string street;
	int houseNumber;

	Address() : city(""), street(""), houseNumber(0) { } // konstruktor domyślny;
	Address(const string& c, const string& s, int hn) {
		this->city = c;
		this->street = s;
		this->houseNumber = hn;
	}

	void display() const {
		cout << "Address: " << this->street << " " << this->city << " " << this->houseNumber << endl;
	}
};

class Person {
public:
	string imie, nazwisko;
	Address address;
	Person(const string& imie, const string& nazwisko, const Address& a) {
		this->imie = imie;
		this->nazwisko = nazwisko;
		this->address = a;
	}
	void display() const {
		cout << "Imie" << this->imie << "Nazwisko" << this->nazwisko << "\n";
		address.display();
	}
};
int main()
{
	Address adres("Pszczyna", "Poniatowskiego", 2);
	Person person("Arek", "Waliczek", adres);
	person.display();

	return 0;

}