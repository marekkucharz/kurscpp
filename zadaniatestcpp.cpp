/* 1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans(w kilometrach) i czas podróży(w godzinach).
Oblicz średnią prędkość i wypisz wynik w km / h. */

#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	double dystKm, czasH, srdPrd;

	cout << "Podaj dystans w kilometrach" << endl;
	cin >> dystKm;
	cout << "Podaj czas podróży w godzinach" << endl;
	cin >> czasH;
	srdPrd = dystKm / czasH;
	cout << "Srednia predkosc wynosi " << srdPrd << " kilometrów na godzine." << endl;


	/* 2. Oblicz pole prostokąta i przekątną
	Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej. */

	double a, b, Pole, Przek;

	cout << "Podaj długość prostokątu w centymetrach ( a ):" << endl;
	cin >> a;
	cout << "Podaj szerokość prostokątu w centymetrach ( b ):" << endl;
	cin >> b;
	Pole = a * b;
	Przek = sqrt(a * a + b * b);

	cout << "Pole tego prostokątu wynosi " << Pole << " cm2, a przekątna prostokątu wynosi " << Przek << " centrymetrów." << endl;


	/* 3. Przeliczanie sekund na godziny, minuty i sekundy

	Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund. */

	int ilcsek, sknd, min, godz;

	cout << "Podaj ilość sekund" << endl;
	cin >> ilcsek;
	godz = ilcsek / 3600;
	min = (ilcsek / 60) - godz * 60;
	sknd = ilcsek - min * 60 - godz * 3600;
	cout << ilcsek << " sekund przelicza się na " << godz << " godzin, " << min << " minut oraz " << sknd << " sekund." << endl;


	/* 4. Oblicz miesięczne zużycie energii

	Program wczytuje moc urządzenia(w watach) oraz liczbę godzin pracy dziennie.
	Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika. */

	double mocUrz, czasP, koszt, cena;

	koszt = 3;
	cout << "Podaj moc urządzenia w kilowatach:" << endl;
	cin >> mocUrz;
	cout << "Podaj dzienny czas pracy w godzinach:" << endl;
	cin >> czasP;
	cena = mocUrz * czasP * 30 * koszt;
	cout << "Miesięczny koszt zużycia energi urządzenia wynosi " << cena << " złotych." << endl;


	/* 5. Oblicz należny podatek dochodowy

	Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru :

	jeśli dochód ≤ 30 000 zł → podatek 12 %,

	jeśli dochód > 30 000 zł → podatek 12 % od 30 000 zł + 32 % od nadwyżki. */

	double dochod, podatek2;

	podatek2 = 3600;

	cout << "Podaj dochód:" << endl;
	cin >> dochod;
	if (dochod <= 30000) {
		cout << "Podatek wynosi " << dochod * 0.12 << " złotych." << endl;
	}
	else {
		cout << "Podatek wynosi " << podatek2 + ((dochod - 30000) * 0.32) << " złotych." << endl;
	}




	/*6. Oblicz ilość farby potrzebnej do pomalowania pokoju

	Program wczytuje długość, szerokość i wysokość pokoju(w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
	Oblicz, ile litrów farby trzeba kupić. */

	double szer1, wys1, iMnL, iloscF;

	cout << "Podaj szerokość ściany w metrach:" << endl;
	cin >> szer1;
	cout << "Podaj wysokość ściany w metrach:" << endl;
	cin >> wys1;
	cout << "Podaj na ile metrów kwadratowych powierzchni wystarczy 1 litr farby:" << endl;
	cin >> iMnL;
	iloscF = ((szer1 * wys1) / iMnL) * 4;
	cout << "Aby pomalować pokój potrzeba " << iloscF << " litrów farby." << endl;

	return 0;
}
