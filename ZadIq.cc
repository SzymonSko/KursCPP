/* Zadanie 3.2 (LArytmetykaWskazikow.cc)
 -------------------------------------
 Wyja�ni� i[q] gdy i jest 'int', a q jest wska�nikiem na tablice
 - wyja�nienie  w komentarzu w tre�ci programu!!!!
 - przyk�ad zastosowania
 - nazwa� program: ZadIq.cc

z arytmetyki wska�nik�w wiadomo �e i[q] oraz q[i] oznacza to sa, nale�y pami�ta�, �e i to liczba a q to wska�nik
 */
#include <iostream>

using namespace std;

int main(){
	int t[] = {9,8,7,6,5,4,3,2,1,0};
	int i;
	cout << "choose index between 0 and 10: ";
	cin >> i;
	int *q = t;

	cout << "t[i]: " << t[i] << endl;
	cout << "q[i]: " << q[i] << endl;
	cout << "i[q]: " << i[q] << endl;
	cout << 0[q] << endl;


	return 0;
}
