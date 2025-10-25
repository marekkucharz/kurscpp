#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    int x;
    cout << "Podaj liczbę:" << endl;
    cin >> x;
    for (int i{}; i < 11; i++) {
        cout << x << "*" << i << "=" << x * i << endl;
    }
    return 0;
}
