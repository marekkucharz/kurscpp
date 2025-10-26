#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>
#include <iomanip>

using namespace std;

int main() {
	double tablica[8];
	double suma = 0;
	double srednia = 0;
	setprecision(2);

	cout << "Podaj 8 liczb: ";
	for (int i = 0; i < 8; i++)
	{
		cout << "Liczba" << i + 1 << ": ";
		cin >> tablica[i];
		suma = suma + tablica[i];
		srednia = suma / 8;
	}
	cout << "Srednia liczb: " << srednia << endl;
	return 0;
}
