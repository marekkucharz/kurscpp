#include<iostream>
#include<string>

using namespace std;

int main()
{
	double cBenL, odleg, spal, koszt;

	cout << "Podaj spalanie na 100km" << endl;
	cin >> spal;
	cout << "Podaj koszt benzyny za 1 litr" << endl;
	cin >> cBenL;
	cout << "Podaj odleglosc jazdy" << endl;
	cin >> odleg;
		koszt = odleg * spal/100 * cBenL;
		cout << "Przejazd " << odleg << " kilometrów będzie kosztowal " << koszt << " zlotych.";
	  return 0;
}
