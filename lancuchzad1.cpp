#include<iostream>
#include<string>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
	char imie[20], nazw[25], x[45];
	cout << "Podaj imie:" << endl;
	cin >> imie;
	cout << "Podaj nazwisko:" << endl;
	cin >> nazw;
	strcpy(imie, x);
	strcat(x, " ");
	strcat(x, nazw);
	cout << x;
	return 0;

}
