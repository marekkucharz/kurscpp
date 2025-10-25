#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

void kwadrat(int x) {
	cout << x * x;
}

int main() {

	int a;
	cout << "Podaj liczbę: " << endl;
	cin >> a;
	kwadrat(a);
	return 0;
}
