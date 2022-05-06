 /*Zadanie 3.3 (LArytmetykaWskaznikow.cc)
 -------------------------------------
 Co robia ponizsze operacje? Napisac program ktory pokazuje ich dzialanie.
 1. Funkcja1(): Przy deklaracji zmiennych
 2. Funkcja2(): Przy deklaracji tablicy
 p++;
 ++p;
 ++*p;
 ++(*p);
 ++*(p);
 *p++;
 (*p)++;
 *(p)++;
 *++p;
 *(++p);

 oraz (Funkcja3()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywal na ekran:

 1.  A, B, C: 0  0   0
 2.  A, B, C: 0  10  0
 3.  A, B, C: 0  10  20
 4.  A, B, C: 0  30  20
 5.  A, B, C: 40 30  20
 6.  A, B, C: 40 50  20
 7.  A, B, C: 40 50  60
 8.  A, B, C: 40 70  60
 9.  A, B, C: 80 70  60
 10. A, B, C: 80 90  60

 przy poczatkowych zmmiennych: int a = 0, b = 0, c = 0;
 - nazwaæ program: ZadArytmetykaWskaznikow.cc */

#include <iostream>

using namespace std;



void Funkcja1(){
	int a = 10;
	int *p = &a;
	cout << "Value of *p " << *p << endl;
	cout << "Value of p++    " << p++ << endl;
	p--;
	cout << "Value of ++p    " << ++p<< endl;
	--p;
	cout << "Value of ++*p   " << ++*p<< endl;
	--*p;
	cout << "Value of ++(*p) " << ++(*p)<< endl;
	 --(*p);
	cout << "Value of ++*(p) " << ++*(p)<< endl;
	--*(p);
	cout << "Value of *p++   "<< *p++<< endl;
    *p--;
	cout << "Value of (*p)++ "<< (*p)++<< endl;
	(*p)--;
	cout << "Value of *(p)++ "<< *(p)++<< endl;
	*(p)--;
	cout << "Value of *++p   "<< *++p<< endl;
	*--p;
	cout << "Value of *(++p) "<< *(++p)<< endl;
	*(--p);
	cout << endl;
}

void Funkcja2(){
	int Tab[] = {10,20,30,40,50};
    int *p = Tab+1;
	cout << "Value of *p " << *p << endl;
	cout << "Value of p++    " << p++ << endl;
	p--;
	cout << "Value of ++p    " << ++p<< endl;
	--p;
	cout << "Value of ++*p   " << ++*p<< endl;
	--*p;
	cout << "Value of ++(*p) " << ++(*p)<< endl;
	 --(*p);
	cout << "Value of ++*(p) " << ++*(p)<< endl;
	--*(p);
	cout << "Value of *p++   "<< *p++<< endl;
    *p--;
	cout << "Value of (*p)++ "<< (*p)++<< endl;
	(*p)--;
	cout << "Value of *(p)++ "<< *(p)++<< endl;
	*(p)--;
	cout << "Value of *++p   "<< *++p<< endl;
	*--p;
	cout << "Value of *(++p) "<< *(++p)<< endl;
	*(--p);
	cout << endl;
}


void Funkcja3(){
int a = 0, b = 0, c = 0;
	int *p = &b;
	int r = &b - &a;
	cout << "A, B, C: " << a << " " << b << " " << c << endl;
	*p += 10;
	cout << "A, B, C: " << a << " " << b << " " << c << endl;
	*(p + r) = *p *2;
	cout << "A, B, C: " << a << " " << b << " " << c << endl;
	*p += *(p+r);
	cout << "A, B, C: " << a << " " << b << " " << c << endl;
	*(p-r) = 2**(p+r);
	cout << "A, B, C: " << a << " " << b << " " << c << endl;


}

int main(){
	Funkcja1();
	Funkcja2();
	Funkcja3();
}
