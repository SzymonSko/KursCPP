#include <iostream>
#include "ZadPrzekazywanieTablicKopia.h"

/*Zadanie 2.3
* --------------------------------------
* Napisz program przekazuj�cy kopi� tablicy. (Czy da si� przekaza� kopi�?)
* - nazwa� program: ZadPrzekazywanieTablicKopia.cc
*/
using namespace std;
int lenght = 3;
void przekazywanie::func(int tab[])
{
        for(int i=0; i<lenght; i++)
                cout << &tab[i] << endl;
}
int przekazywanie::main()
{
        int table[] = {0, -2, 4};
        for(int i=0;i<lenght;i++)
                cout<<table[i]<<endl;
        cout<<endl;
        func(table);
        return 0;
}
