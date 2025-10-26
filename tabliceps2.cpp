#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tablica[10];

	cout << "Podaj 10 liczb: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "Liczba " << i + 1 << ": ";
		cin >> tablica[i];
	}

	cout << "Liczby parzyste: ";
	for (int i = 0; i<10; i++)
	{
		if (tablica[i] % 2 == 0) {
			cout << tablica[i] << " ";
		 }
	}
	cout << "Liczby nieparzyste: ";
	for (int i = 0; i < 10; i++)
	{
		if (tablica[i] % 2 != 0) {
			cout << tablica[i] << " ";
		}
	}
	return 0;
}
