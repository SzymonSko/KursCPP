/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief Klasy: Metody abstrakcyjne w C++
 * v0.02
 */

 /*Zadanie 5.6
--------------------------------------
Bazuj¹c na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:
- obwód, pole powierzchni
dla:
- kwadrat, trójk¹t, prostok¹t, ko³o (jako klasy dziedzicz¹ce po klasie abstrakcyjnej Figura),
oraz funkcja Dystans (dodatkowo w klasie Ko³o):
  Jeœli rz¹d podaje, ¿e na ka¿dego obywatela w sklepie (koœciele etc) przypada X metrów kwadratowych (argument przekazywany do funkcji)
  to w jakiej odleg³oœci (promieniu - to ma funkcja Dystans zwracaæ) mo¿e znaleŸæ siê nastêpna osoba.
Nazwij program: ZadMetodyAbstrakcyjne.cc */

#include <iostream>
#include <math.h>

using namespace std;


//------------------------------------------------------------------
class Figura
{
 public:
   virtual double obw() = 0;
   virtual double P() = 0;
};
//------------------------------------------------------------------




//------------------------------------------------------------------
class Trojkat : public Figura
{
    private:
        double a, b, c;
    public:
        Trojkat(double a, double b, double c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }

                double obw()
                {
                    return a + b + c;
                }
                double P()
                {
                    double p = 0.5 *(a + b + c) ;
                    double ret = sqrt(p * (p - a) * (p - b) * (p - c));
                    if (ret > 0){
                        return ret;
                    }
                    else
                    {
                            cout<<"error"<<endl;
                    }
                }


};

//------------------------------------------------------------------
class Kwadrat : public Figura
{
    private:
        double a;
    public:
        Kwadrat(double a)
        {
            this->a = a;
        }
            double obw()
            {
                return 4*a;
            }
            double P()
            {
                return pow(a,2);
            }

};

//------------------------------------------------------------------
class Prostokat : public Figura
{
    private:
        double a, b;
    public:
        Prostokat(double a, double b)
        {
            this->a = a;
            this->b = b;
        }
            double obw()
            {
                return 2 * a + 2 * b;
            }
            double P()
            {
                return a * b;
            }

};



//------------------------------------------------------------------
class Kolo : public Figura
{
    private:
        double r;
    public:
        Kolo(double r)
        {
            this->r = r;
        }
            double obw()
            {
                return 2 * M_PI * r;
            }
            double P()
            {
                return M_PI * pow(r,2);
            }

};



//------------------------------------------------------------------
int main()
{
   //Kwadrat
    Kwadrat k(2);
    cout<<"Obwod kwadratu: " << k.obw() << endl;
    cout<<"Pole kwadratu: " <<k.P()<<endl;

    //Trójk¹t
    Trojkat t(5,2,7);
    cout<<"\nObwod trojkat: " << t.obw() << endl;
    cout<<"Pole trojkat: " <<t.P()<<endl;

    //Prostokat
    Prostokat p(5, 3);
    cout<<"\nObwod Prostokata: " << p.obw() << endl;
    cout<<"Pole Prostokata: " <<p.P()<<endl;

    //Kolo
    Kolo ko(5);
    cout<<"\nObwod Kola: " << ko.obw() << endl;
    cout<<"Pole Kola: " <<ko.P()<<endl;

}
