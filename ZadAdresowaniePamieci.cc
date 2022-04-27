/* Zadanie 3.1 (LArytmetykaWskaznikowZmienne.cc)
 -------------------------------------
 Kierunek adresowania pamiêci
 - wyjaœniæ w komentarzu do programu podaj¹cego przyk³ad:
 - wypisywanie adresów deklarowanych zmiennych
 - nazwaæ program: ZadAdresowaniePamieci.cc

 Adresy zmiennych odzwierciedlaj¹ kolejno przydzielone im miejsce w pamiêci, oddzielone o rozmiar zmiennej
*/

#include <iostream>
using namespace std;

int main(){
    int i = 15;
    float f = 15.0;
    char c = '15';

    cout <<"adress for int: " << &i << '\n' << "Value for int: " << i <<endl;
    cout <<" " <<endl;
    cout << "adress for float: " << &f << '\n' << "Value for float: " << f <<endl;
    cout <<" " <<endl;
    cout <<"adress for string: " << &c << '\n' << "Value for string: " << c <<endl;

    return 0;
}
