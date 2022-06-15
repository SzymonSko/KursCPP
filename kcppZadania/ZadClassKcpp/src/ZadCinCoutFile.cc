#include <iostream>
#include <fstream>
#include "ZadCinCoutFile.h"


using namespace std;

int cincout::main(){
    cout <<"Enter your number: ";
    int number;
    cin >> number;
    fstream fileA("cin.txt", ios::app);


    if (fileA.good()){
        cout<<"File opened" <<endl;
        cout<<"Saving number: "<< number << endl;
        fileA << number;
        fileA.close();
        cout<<"Saved succefull" <<endl;
    }
    else{
        cout<<"Saving failed"<<endl;
    }

    fstream fileB("cin.txt");
    if (fileB.good()){
        string line;
        cout<<"Reading from file: "<<endl;
        while (!fileB.eof()){
            getline(fileB, line);
            cout << "Saved number's are: " << line<< endl;
        }
        fileB.close();
    }
    return 0;
}
