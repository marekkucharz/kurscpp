#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int main() {
	int tablica[10];
	int suma = 0;

	cout << "Podaj 10 liczb całkowitych: ";
	for (int i = 0; i < 10; i++)
	{
		cout << "Liczba" << i +1 << ": ";
		cin >> tablica[i];
		suma = suma + tablica[i];
	}
	cout << "Suma liczb: " << suma << endl;
	return 0;
}
