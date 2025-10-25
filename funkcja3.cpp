#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int kwadrat(int x) {
	return x*x;
}

int main() {

	int a;
	cout << "Podaj liczbę: " << endl;
	cin >> a;
	cout << kwadrat(a);
	return 0;
}
