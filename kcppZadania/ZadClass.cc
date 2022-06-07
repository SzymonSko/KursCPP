/*
Zadanie 5.1
--------------------------------------
Napisz prosty program z klas�
- metody deklarowane i definiowane w klasie
- metody deklarowane w klasie, a definiowane poza klas�
- zastosowanie 3 sekcji: public, private, protected
- zmienne w ka�dej z sekcji
- funkcje, kt�re maj� dost�p do zmiennych z sekcji protected i private
- funkcje inline
- nazwij program: ZadClass.cc
*/

#include <iostream>
using namespace std;
class classA{

    public:
        int a;
        void setA(int intA){
            a = intA;
        }

        void setB(int intB){
            b = intB;
        }

        void setC(int intC){
            c = intC;
        }

        inline int add(){
            return a+b+c;
        }
        void print();

    private:
        int b;

    protected:
        int c;

};

int main(){

    classA aclass;
    aclass.setA(9);
    aclass.setB(6);
    aclass.setC(11);
    cout << "a + b + c: " << aclass.add() << endl;
    return 1;
}



