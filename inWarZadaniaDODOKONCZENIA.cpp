#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	int liczba;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> liczba;
	if (liczba > 0) {
		cout << "Liczba jest dodatnia." << endl;
	}


	int liczba1;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> liczba1;
	if (liczba1 % 2 == 0) {
		cout << "Liczba jest parzysta" << endl;
	}
	else {
		cout << "Liczba jest nieparzysta" << endl;
	}

	int x;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> x;
	if (x >= 10 && x <= 50) {
		cout << "Liczba znajduje się w przedziale 10-50" << endl;
	}
	else {
		cout << "Liczba nie znajduje się w przedziale 10-50" << endl;
	}

	int liczba4;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> liczba4;
	if (liczba4 > 0) {
		cout << "Liczba jest dodatnia" << endl;
	}
	else if (liczba4 < 0) {
		cout << "Liczba jest ujemna" << endl;
	}
	else {
		cout << "Liczba jest równa zero" << endl;
	} 
