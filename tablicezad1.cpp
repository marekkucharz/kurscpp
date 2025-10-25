#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tablica[5];

	cout << "Podaj 5 liczb: ";
	for (int i = 0; i < 5; i++)
	{
		cin >> tablica[i];
	}

	cout << "Wczytane liczby: ";
	for (int i = 0; i < 5; i++)
	{
		cout << tablica[i] << " ";
	}
	cout << endl;
	return 0;
}
