#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tablica1[5];
	int tablica2[5];

	cout << "Podaj 5 liczb do pierwszej tablicy: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> tablica1[i];
	}
	cout << "Podaj 5 liczb do drugiej tablicy: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> tablica2[i];
	}
/*
	cout << "Wczytane liczby z pierwszej tablicy: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << tablica1[i] << " " << endl;
	}
	cout << "Wczytane liczby z drugiej tablicy: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << tablica2[i] << " " << endl;
	} */
	for (int i = 0; i < 5; i++) {
	if (tablica1[i] != tablica2[i]) {
		cout << "Tablice sie roznia" << endl;
	}
	}
	for (int i = 0; i < 5; i++) {
	if (tablica1[i] == tablica2[i]) {
		cout << "Tablice sa identyczne" << endl;
	}
	cout << endl;
	return 0;
}
}
