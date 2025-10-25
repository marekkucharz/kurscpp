#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

int silna(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * silna(n - 1);
}

int main() {

	int a;
	cout << "Podaj liczbę: " << endl;
	cin >> a;
	cout << silna(a);
	return 0;
}
