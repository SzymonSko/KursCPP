#include <iostream>
#include "ZadKcpp.h"
void functions::zad1(){
    manipulacja *zad1 = new manipulacja;
    delete zad1;
}
void functions::zad2(){
    candcpp *zad2 = new candcpp;
    delete zad2;
}
void functions::zad3(){
    cincout *zad3= new cincout;
    delete zad3;
}
void functions::zad4(){
    loop *zad4 = new loop;
    delete zad4;
}
void functions::zad5(){
    przekazywanie *zad5 = new przekazywanie;
    delete zad5;
}

    int functions::run() {
        int a;
        while (a >0 || a < 6){
        cout << "Select Exercise" << endl;
        cout << "1) Manipulacja strumieniami" << endl;
        cout << "2) Roznice miedzy C a CPP" << endl;
        cout << "3) Zapisy i odczyt z pliku" << endl;
        cout << "4) Petle" << endl;
        cout << "5) Przekazywanie tablic" << endl;
        cout << "0) Wyjscie z prograu"<<endl;
        cin >> a;
        if (a==0)
        {
            cout<<"exit";
            break;
        }
        else{
            switch (a) {
                case 1:
                    cout << "Manipulacja strumieniami" << endl;
                    functions::zad1();
                    break;
                case 2:
                    cout << "Roznice miedzy C a CPP" << endl;
                    functions::zad2();
                    break;
                case 3:
                    cout << "Zapisy i odczyt z pliku" << endl;
                    functions::zad3();
                    break;
                case 4:
                    cout << "Petle" << endl;
                    functions::zad4();
                    break;
                case 5:
                    cout << "Przekazywanie tablic" << endl;
                    functions::zad5();
                    break;
                default:
                    cout<<"zły wybór"<<endl;

            }
        }


    }
return 0;
}

