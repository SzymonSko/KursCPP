/* Zadanie 3.2 (LArytmetykaWskazikow.cc)
 -------------------------------------
 Wyjaśnić i[q] gdy i jest 'int', a q jest wskaźnikiem na tablice
 - wyjaśnienie  w komentarzu w treści programu!!!!
 - przykład zastosowania
 - nazwać program: ZadIq.cc

z arytmetyki wskaźników wiadomo że i[q] oraz q[i] oznacza to sa, należy pamiętać, że i to liczba a q to wskaźnik
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
 
