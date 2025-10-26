#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tablica[8];

	cout << "Podaj 8 liczb: ";
	for (int i = 0; i < 8; i++)
	{
		cin >> tablica[i];
	}

	cout << "Wczytane liczby w odwrotnej kolejnosci: ";
	for (int i = 7; i >= 0; i--)
	{
		cout << tablica[i] << " ";
	}
	cout << endl;
	return 0;
}
