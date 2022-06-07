/*Zadanie 5.2
--------------------------------------
Stwórz plik z dzia³aj¹ca struktur¹:
- deklaracja,
- definicja obiektów (w dowolny sposób):
  - wywo³anie,
  - zmiana wartoœci,
  - odczyt wartoœci,
  // - czy mo¿na stworzyæ konstruktor (inicjalizacja wartoœci poczatkowych - standard, lista inicjalizacyjna)
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
