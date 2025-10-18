#include<iostream>
#include<string>

using namespace std;

int main()
{
	double temp_C, temp_F;

	cout << "Podaj temperature w C:" << endl;
	cin >> temp_C;
	temp_F = (temp_C * 1.8) + 32;
	cout << "Temperatura " << temp_C << " stopni Celsjusza to " << temp_F << " stopni Farenheita." << endl;
	  return 0;
}
