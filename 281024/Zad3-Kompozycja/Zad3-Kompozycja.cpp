#include <iostream>
#include <string>
using namespace std;

class Engine {
public:
	double size;
	int power;

	Engine() : size(0), power(0) {} // konstruktor domyślny;
	Engine(int s, int p) {
		this->size = s;
		this->power = p;
	}

	void display() const {
		cout << "Engine: " << this->power << "HP, SIZE: " << this->size << endl;
	}
};

class Car {
public:
	string model;
	Engine engine;
	Car(const string &m, const Engine &e) : model(m), engine(e) {}
	void display() const {
		cout << "Car model: " << model << endl;
		engine.display();
	}
};
int main()
{
	Engine engine(2.0, 150);
	Car car("Toyota", engine);
	car.display();

	return 0;

}