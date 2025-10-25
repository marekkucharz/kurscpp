#include<iostream>      
#include<cstring>
#include<cmath>
#include<cctype>

using namespace std;

//1. Napisz funkcję roznica, która zwraca różnicę dwóch liczb całkowitych.

int roznica(int a1, int b1) {
	return a1 - b1;
}


//2. Napisz funkcję iloczyn, która zwraca iloczyn dwóch liczb całkowitych.

int iloczyn(int a2, int b2) {
	return a2 * b2;
}


//3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.

double srednia(double a3, double b3) {
	return (a3+b3)/2;
}


//4. Napisz funkcję czy_parzysta, która zwraca true, jeśli liczba jest parzysta, a false w przeciwnym wypadku.


bool czy_parzysta(int a4) {
	if (a4 % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}


//5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.

int wartosc_bezwzgledna(int a5) {
	if (a5>=0) {
		return a5;
	}
	else {
		return a5 * -1;
	}
}


//6. Napisz funkcję pole_prostokata, która zwraca pole prostokąta.

int pole_prostokata(int a6, int b6) {
	return a6 * b6;
}


//7. Napisz funkcję double pole_kola, która zwraca pole koła.

double pole_kola(double r7) {
	return 3.141592653589 * ( r7*r7) ;
}


//8. Napisz funkcję double obwod_kwadratu, która zwraca obwód kwadratu.

double obwod_kwadratu(double a8) {
	return a8 * 4;
}


//9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.

int minimum(int a9, int b9) {
	if (a9>b9) {
		return b9;
	}
	else {
		return a9;
	}
}


//10. Napisz funkcję maximum, która zwraca wiekszosc z dwóch liczb.

int maximum(int a11, int b11) {
	if (a11 > b11) {
		return a11;
	}
	else {
		return b11;
	}
}


int main() {

	cout << roznica(6, 5) << endl;
	cout << iloczyn(6, 7) << endl;
	cout << srednia(5, 7) << endl;
	cout << czy_parzysta(6) << endl;
	cout << wartosc_bezwzgledna(-6) << endl; // 5
	cout << "Pole prostokata wynosi: " << pole_prostokata(5, 5) << endl;
	cout << "Pole kola wynosi: " << pole_kola(5) << endl << endl;
	cout << "Obwod kwadratu wynosi: " << obwod_kwadratu(6) << endl << endl;
	cout << minimum(6, 7) << endl;
	cout << maximum(6, 7) << endl;
	return 0;
}
