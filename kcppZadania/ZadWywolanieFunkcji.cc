#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

void funA()
    {
    system("cls");
    cout << "Function A" << endl;
    }

void funB()
    {
    system("cls");
    cout << "Function B" << endl;
    }
void mainS()
    {
        int method;
        string opt1;
        int opt2;
        cout<<"Method 1 by string "<<endl;
        cout<<"Method 2 by switch "<<endl;
        cin>>method;
        switch(method)
        {
        case 1:
            cout<<"type fun1 to choose function number 1 or fun2 to choose function number 2 (only lowercases): ";
            cin>>opt1;
            if(opt1 == "fun1")
                {
                    funA();
                    break;
                }
            else if(opt1 =="fun2")
                {
                    funB();
                    break;
                }
            else{
                cout<<"wrong, try again"<<endl;
            }
        case 2:
            cout<<"1 to choose function number 1"<<endl;
            cout<<"2 to choose function number 2"<<endl;
            cin>>opt2;
            switch(opt2)
            {
            case 1:
                funA();
                break;
            case 2:
                funB();
                break;
            }

        }
    }
int main(){
    mainS();
	}


