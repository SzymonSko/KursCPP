#include <iostream>

using namespace std;

void metohodA(int a){
    if (a & 1 != 1){
        cout<<"Number is not even"<< endl;
    }
    else{
        cout<<"Number is  even"<< endl;
    }
}
void metohodB(int a){
    if (a % 2 != 1){
        cout<<"Number is  even" << endl;
    }
    else{
        cout<<"Number is not even"<< endl;
    }
}

void metohodC(int a){
    a % 2 != 0 ? cout<<"Number is not even"<< endl : cout<<"Number is  even"<< endl;
    }

int main(){
	int number;
	cout << "Enter your number: ";
	cin >> number;
	metohodA(number);
	metohodB(number);
    metohodC(number);
}
