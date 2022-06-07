/*Zadanie 5.5
--------------------------------------
Sprawdzi� dzi�anie przyja�ni klas:
- Klasa B zaprzyja�niona z klas� A ma ma dost�p do sk�adnik�w prywatnych
- Czy klasa A w tym samym momencie mo�e by� tak�e zaprzyja�niona z klas� B?

Friendship is not mutual. If class A is a friend of B, then B doesn�t become a friend of A automatically.
https://www.geeksforgeeks.org/friend-class-function-cpp/ */

#include <iostream>

using namespace std;

class A
    {
        private:
            int a;
        public:
            A(){a= 5;}
            friend class B;
    };
class B
    {
    private:
        int b;
    public:
        void isFriend(A& x)
        {
            cout<<"I'm B and i have access to A private value: " <<x.a;
        }

    };

int main()
{
    A a;
    B b;
    b.isFriend(a);
    return 0;
}
