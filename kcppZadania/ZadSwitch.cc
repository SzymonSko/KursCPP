/*Zadanie 4.6
--------------------------------------
Napisz program wykorzystuj¹cy instrukcje 'switch' gdzie:
- zamiast pojedynczego znaku bêdzie sprawdzane ca³e s³owo
- program mo¿e byæ uszczegó³owieniem/modyfikacj¹ (zrobiæ kopie pliku i zmieniæ kopie) tego co jest w ZadParzysteCase.cc
- nazwaæ program: ZadSwitch.cc*/

#include <iostream>
#include <string>

using namespace std;

void evenA(int a){
    if (a & 1 != 1){
        cout<<"Number is not even"<< endl;
    }
    else{
        cout<<"Number is  even"<< endl;
    }
}
void evenB(int a){
    if (a % 2 != 1){
        cout<<"Number is  even" << endl;
    }
    else{
        cout<<"Number is not even"<< endl;
    }
}

void evenC(int a){
    a % 2 != 0 ? cout<<"Number is not even"<< endl : cout<<"Number is  even"<< endl;
    }

int main(){
	int number;
	cout << "Enter your number: ";
	cin >> number;

    string str;
	cout<<"select method evenA, evenB or evenC " <<endl;
	cin>> str;
    if (str.length() != 5){
        cout<<"Check length of your input" <<endl;
        return 0;
    }
    switch(str[0]){
        case 'e':
        case 'E':
            switch(str[1]){
                case 'v':
                case 'V':
                    switch(str[2]){
                        case 'e':
                        case 'E':
                            switch(str[3]){
                                case 'n':
                                case 'N':
                                    switch(str[4]){
                                        case 'a':
                                        case 'A':
                                            evenA(number);
                                            break;
                                        case 'b':
                                        case 'B':
                                            evenB(number);
                                            break;
                                        case 'c':
                                        case 'C':
                                            evenC(number);
                                            break;
                    }
                }
            }
        }
    }
}
