/*Zadanie 5.4
--------------------------------------
Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i 
inicializacją zmiennych:
- domyślny konstruktor,
- domyślny destruktor,
- konstruktor z niepustą liczbą zmiennych argumentów
- inicjalizacja zmiennych:
  - 'standardowa',
  - inicjalizacyjna za pomocą listy inicjalizacyjnej*/

#include<iostream>

using namespace std;

struct structA
{
    int a;
    int b;
    int c = 6;
    structA()
    {
        a = 4; b =2;
    }
    structA(int x)
    {
        a = x;
    }
    structA(int x, int y) :a(x), b(y){}
    ~structA()
    {
        cout<<"Destroyed"<<endl;
    }
};
int main()
{
    structA Astruct;
    Astruct.c;
    Astruct.a++;
    cout<<"a= "<<Astruct.a<<"\tb = "<<Astruct.b<<"\tc= "<<Astruct.c<<endl;

    structA *dest = new structA();
    dest->a=5;
    cout<<dest->a<<endl;
    delete dest;
}
