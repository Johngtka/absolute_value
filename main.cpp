#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int value;

void get(){
	system("pause");
	system("cls");
}

void absolute(){
    system("cls");
    try {
        string liczba;
        cout << "Wpisz liczbe z ktorej chcesz obliczyc |x|: ";
        cin >> liczba;
        value = stoi(liczba);
        cout << "Twoja wartosc sie rowna: "<<abs(value)<<endl;
        get();
        system("cls");
    }
    catch (const exception& e) {
        cout << "Nie uzywaj alfabetu" << endl;
    }
}

int main()
{
    absolute();
    return 0;
}
