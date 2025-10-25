#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char tekst[50];
    cout << "Podaj wyraz: ";
    cin >> tekst;

    int licznik = 0; 
    int dl = strlen(tekst);

    for (int i = 0; i < dl; i++) {
        if (tekst[i] == 'a' || tekst[i] == 'A')
        {
            licznik++;
        }
    }
    cout << "Litera 'a' wystepuje " << licznik << " raz/y." << endl;

    return 0;
}
