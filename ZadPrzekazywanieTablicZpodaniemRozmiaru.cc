#include <iostream>

/*Zadanie 2.2
* --------------------------------------
* Napisz program przekazuj¹cy tablice z zachowaniem rozmiaru
* Czy siê da?
* Jeœli tak to proszê wykonaæ zadanie:
* - nazwaæ program: ZadPrzekazywanieTablic.cc
* Jeœli siê nie da to proszê wykonaæ zadanie:
* - zdefiniowaæ ogóln¹ funkcjê w której nie jest na sztywno ustawiony rozmiar tablicy, która przekazujemy:
* - nazwaæ program: ZadPrzekazywanieTablicZpodaniemRozmiaru.cc
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
