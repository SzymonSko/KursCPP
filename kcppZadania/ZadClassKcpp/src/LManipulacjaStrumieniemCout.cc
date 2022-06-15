#include <iostream>
#include <iomanip>
#include "LManipulacjaStrumieniemCout.h"

using namespace std;

int manipulacja::main(){
    double a = 5.1245/92.51455;
    double b = 92.51455/5.1245;
    cout << setfill('=') << setw(50) << '=' <<endl << endl;
    cout << "Wynik naszego dzialania: " << a  / 4 * 1.2 << " jest niepoprawny, ale:"<<endl;
    cout << setfill(' ') << setw(9) <<"output: " << setw(8) << setprecision(5) << b << setw(7) <<"T:" << setw(7) << setprecision(2) << a<<endl;
    cout << setfill(' ') << setw(10) <<"output1: " << setw(8) << setprecision(3) << a << setw(5) <<"T:" << setw(9) << setprecision(7) << b<<endl;
    cout << setfill(' ') << setw(10) <<"output2: " << setw(8) << setprecision(3) << a << setw(5) <<"T:" << setw(10) << setprecision(8) << b<<endl;
    cout << setw(1) << ' ' << setfill ('-') << setw(33) <<'-' << endl;
    cout << setfill(' ') << setw(10) <<"average: " << setw(8) << setprecision(6) << b << setw(5) <<"T:" << setw(10) << setprecision(8) << b<<endl;
    cout << setfill('=') << setw(50) << '=' <<endl;
    return 0;
}
