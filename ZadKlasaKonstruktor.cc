/**
 * Zadanie 5.4
 * --------------------------------------
 * Stw�rz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przyk�adami konstruktor�w i
 * inicializacj� zmiennych:
 * - domy�lny konstruktor,
 * - domy�lny destruktor,
 * - konstruktor z niepust� liczb� zmiennych argument�w
 * - inicjalizacja zmiennych:
 *   + 'standardowa',
 *   + inicjalizacyjna za pomoc� listy inicjalizacyjnej
 */

#include <iostream>
using namespace std;
class classA{
    public:
        int a;
        int b;
        int c;
        classA() : a(0), b(2), c(4){};
        classA(int a, int b, int c) : a(a), b(b), c(c){};
        ~classA(){
        cout<<"Destroy"<<endl;
        };

        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        int getC()
        {
            return c;
        }
};




int main(){

    classA aclass;
    cout <<"a: " << aclass.getA() << endl;
    cout <<"b: " << aclass.getB() << endl;
    cout <<"c: " << aclass.getC() << endl;

    classA aclass2 = {2, 1, 6};
    cout<<"\na: "<<aclass2.getA()<<endl;
    cout<<"b: "<<aclass2.getB()<<endl;
    cout<<"c: "<<aclass2.getC()<<endl;

    classA def(aclass);
    classA *dest = new classA();
    cout<<"\na: "<<dest->getA()<<endl;
    cout<<"b: "<<dest->getB()<<endl;
    cout<<"c: "<<dest->getC()<<endl;
    delete dest;
}



