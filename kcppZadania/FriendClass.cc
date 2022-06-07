/*Zadanie 5.5
--------------------------------------
Sprawdziæ dzi³anie przyjaŸni klas:
- Klasa B zaprzyjaŸniona z klas¹ A ma ma dostêp do sk³adników prywatnych
- Czy klasa A w tym samym momencie mo¿e byæ tak¿e zaprzyjaŸniona z klas¹ B?

Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
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
