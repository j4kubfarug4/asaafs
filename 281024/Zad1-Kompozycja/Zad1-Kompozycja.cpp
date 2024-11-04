#include <iostream>
using namespace std;

class Silnik {
    public:
        int moc;
        Silnik(int _moc) {
            this->moc = _moc;
        }
};

class Samochod {
    private:
        Silnik silnik;
    public:
        Samochod(int moc) :silnik(moc) {}
};

int main()
{
    cout << "Zadanie nr 1 - Kompozycja\n";

    return 0;
}