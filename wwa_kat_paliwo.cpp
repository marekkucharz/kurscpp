#include<iostream>
#include<string>

using namespace std;

int main()
{
	double cBenL, odleg, spal, koszt;

	cout << "Podaj spalanie na 100km" << endl;
	cin >> spal;
	cBenL = 6.69;
		odleg = 335;
		koszt = odleg * spal/100 * cBenL;
		cout << "Przejazd " << odleg << " kilometrów z Katowic do Warszawy będzie kosztowal " << koszt << " zlotych.";
	  return 0;
}
