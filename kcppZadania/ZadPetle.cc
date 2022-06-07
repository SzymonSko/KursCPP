/*Zadanie 4.5
--------------------------------------
Napisz program pokazuj¹cy dzia³anie instrukcji (ka¿da jako osobna funkcja; trzy funkcje od a do c):
(a) while    (pokazuj¹ce while z inkrementacj¹: i++, ++i)
(b) do-while (pokazuj¹ce do-while z inkrementacj¹: i++, ++i)
(c) for
- wykorzystaj: break, continue, return
- nazwaæ program: ZadPetle.cc */

#include<iostream>

using namespace std;

void funWhile(int numb ){
    cout<<"i++" << endl;
    int i = 0;
    while(i++ < numb){
        if(i == numb){
            cout<<"i is even to numb value. Break "<<endl;
            break;
        }
        cout<< i<<", ";
    }


    cout<<"++j" << endl;
    int j = 0;
    while(++j < numb){
        if(j == numb){
            cout<<"j is even to numb value. Break "<<endl;
            break;
        }
        cout<< j<<", ";
    }
    cout<<endl;
}

void funDoWhile(int numb){
    cout<<"i++"<<endl;
    int i = 0;
    do{
        if(i == 2){
            cout<< "'2 is here, continue now' ";
            continue;

        }

        cout<< i << " ";



    }
    while (i++ < numb);
    cout<<endl;

    cout<<"++j"<<endl;
    int j = 0;
    do{
        if(j == 2){
            cout<< "'2 is here, continue now' ";
            continue;

        }

        cout<< j << " ";



    }
    while (j++ < numb);
    cout<<endl;
}
void funFor(int numb){
    cout<<"for loop"<<endl;
    for(int i = 0; i <= numb;  i++){
        if(i == 3){
        cout << "i==3, return for loop  that's shorter" << endl;
			return funFor(numb - 2);
        }
        cout<<i <<" ";
    }


}

int main(){
    int numb = 5;
	funWhile(numb);
    funDoWhile(numb);
    funFor(numb);

}
