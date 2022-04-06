#include <iostream>

/*Zadanie 2.2
* --------------------------------------
* Napisz program przekazujący tablice z zachowaniem rozmiaru
* Czy się da?
* Jeśli tak to proszę wykonać zadanie:
* - nazwać program: ZadPrzekazywanieTablic.cc
* Jeśli się nie da to proszę wykonać zadanie:
* - zdefiniować ogólną funkcję w której nie jest na sztywno ustawiony rozmiar tablicy, która przekazujemy:
* - nazwać program: ZadPrzekazywanieTablicZpodaniemRozmiaru.cc
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
