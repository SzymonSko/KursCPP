/**
 * Zadanie 4.7
 * --------------------------------------
 * Napisz program pokazujący zastosowanie dyrektywy preprocesora:
 *   '#ifdef' (#else)
 *   '#ifndef'
 * oraz
 *   '#define':
 *   (a) użycie makra
 *   (b) uzycie '#' i '##'
 *   (a) i (b) stwórz także dla porównania bez dyrektywy preprocesora
 * Nazwać program: ZadPreprocesor.cc
 */

#include <iostream>
using namespace std;

#define val 10
#define concatenate(int1, int2) int1 ## int2 << #int1 << #int2 << " " << int1 << " " << int2 << endl;

void ifDef(){
	int a = 0;
#ifdef val
	a += val;
#endif

#ifndef val
	a += 100;
#endif
	cout << a << endl;
}

void value1(){
    int a = val * 6;
    cout<<a<<endl;
}
void value2(){
    int a = 7;
    cout<<a<<endl;
}

void con(){
	int c = 21;
	int out = 37;
	concatenate(c, out);
}



int main(){

	cout<< "ifdef print: "; ifDef();
    cout<<"Macro print: "; value1();
	cout<<"No Macro print: "; value2();
	cout<<"concatenate print: "; con();
}









