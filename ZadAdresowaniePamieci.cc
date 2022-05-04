/* Zadanie 3.1 (LArytmetykaWskaznikowZmienne.cc)
 -------------------------------------
 Kierunek adresowania pamięci
 - wyjaśnić w komentarzu do programu podającego przykład:
 - wypisywanie adresów deklarowanych zmiennych
 - nazwać program: ZadAdresowaniePamieci.cc

 Adresy zmiennych odzwierciedlają kolejno przydzielone im miejsce w pamięci, oddzielone o rozmiar zmiennej
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
