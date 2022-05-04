#include <iostream>
/*
* Zadanie 2.1
* --------------------------------------
* Zadanie: Napisaæ program z czterema funkcjami z których ka¿da zwraca inaczej:
* 1. Przez wartosc
* 2. Przez referencje
* 3. Przez wskaznik
* 4. Tablice (prosze sie zastanowiæ o co tak naprawde chodzi)
* - nazwae program: ZadZwracanie.cc
*/
using namespace std;

void val(int a)
{
    a = a*a;
}

void refer(int &a)
{
    a = a*a;
}

void functionPoint(int *a)
{
	*a = *a*3;
}

void tabl(int tab[])
{
	for(int i=0; i <3; i++){
		tab[i] = tab[i]*2;
	}
}



int main(){
	int a = 5;
	int *poiner = &a;

	cout  << "Value a: " << a << endl;
	val(a);
	cout  << "Value a: " << a << endl;
	refer(a);
	cout  << "Value a: " << a << endl;
	functionPoint(poiner);
	cout  << "Value a: " << a << endl;


	int tab[] = {5,5,5};
	tabl(tab);
	for(int i = 0; i < 3; i++){
		cout << tab[i] << ",";
	}
	cout << endl;
	return 1;
}
