#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{
char tekst[40];
cout<<"Podaj tekst: " << endl;
cin>>tekst;

for (int i=0; tekst[i]; i++)
{
    tekst[i] = toupper(tekst[i]);
}
cout<<"Tekst w wielkich literach:  "<<tekst <<endl;
    return 0;
}
