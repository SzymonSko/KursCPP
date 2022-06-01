/*Zadanie 5.3
--------------------------------------
Poka¿ dzia³anie uni (niebezpieczenstwa, bledy)
- nazwij program: ZadUnia.cc*/

#include<iostream>

using namespace std;

union U
{
    int integer;
    int integer2[1];
    char chars;
    float flt;
};
int main()
{
    union U i, ii, c, f;
    i.integer = 25;
    ii.integer2[0] = 9;
    ii.integer2[1] = 2;
    cout<<"int = "<<i.integer<<endl;
    cout<<"int[0] = "<<ii.integer2[0]<<endl;
    cout<<"int[1] = " <<ii.integer2[1]<<endl;
    c.chars = 11.5;
    f.flt= 13.53;
    cout<<"char = " <<c.chars<<endl;
    cout<<"float = "<<f.flt<<endl;
    cout<<"int = "<<i.integer<<endl;

}
