/*Zadanie 5.2
--------------------------------------
Stw�rz plik z dzia�aj�ca struktur�:
- deklaracja,
- definicja obiekt�w (w dowolny spos�b):
  - wywo�anie,
  - zmiana warto�ci,
  - odczyt warto�ci,
  // - czy mo�na stworzy� konstruktor (inicjalizacja warto�ci poczatkowych - standard, lista inicjalizacyjna)
- nazwij program: ZadStruct.cc*/

#include<iostream>

using namespace std;

struct structA
{
    int a;
    int b;
    int c = 6;
};
int main()
{
    structA Astruct;
    Astruct.a = 2;
    Astruct.b = 8;
    Astruct.c;
    Astruct.a++;
    cout<<"a= "<<Astruct.a<<"\tb = "<<Astruct.b<<"\tc= "<<Astruct.c<<endl;
}
