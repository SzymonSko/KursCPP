#include <iostream>

/*Zadanie 2.2
* --------------------------------------
* Napisz program przekazuj�cy tablice z zachowaniem rozmiaru
* Czy si� da?
* Je�li tak to prosz� wykona� zadanie:
* - nazwa� program: ZadPrzekazywanieTablic.cc
* Je�li si� nie da to prosz� wykona� zadanie:
* - zdefiniowa� og�ln� funkcj� w kt�rej nie jest na sztywno ustawiony rozmiar tablicy, kt�ra przekazujemy:
* - nazwa� program: ZadPrzekazywanieTablicZpodaniemRozmiaru.cc
*/
using namespace std;
int lenght = 3;
void func(int tab[])
{
        for(int i=0; i<lenght; i++)
                tab[i]*=tab[i];
}
int main()
{
        int table[] = {0, -2, 4};
        for(int i=0;i<lenght;i++)
                cout<<table[i]<<" ";
        cout<<endl;
        func(table);
        for(int i=0;i<lenght;i++)
                cout<<table[i]<<" ";
        return 0;
}
