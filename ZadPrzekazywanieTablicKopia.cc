#include <iostream>

/*Zadanie 2.3
* --------------------------------------
* Napisz program przekazujšcy kopię tablicy. (Czy da się przekazać kopię?)
* - nazwać program: ZadPrzekazywanieTablicKopia.cc
*/
using namespace std;
int lenght = 3;
void func(int tab[])
{
        for(int i=0; i<lenght; i++)
                cout << &tab[i] << endl;
}
int main()
{
        int table[] = {0, -2, 4};
        for(int i=0;i<lenght;i++)
                cout<<table[i]<<endl;
        cout<<endl;
        func(table);
        return 0;
} 
