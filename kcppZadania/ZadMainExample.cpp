#include <iostream>
using namespace std;

extern "C" void HelloWorldC()
{
    cout<<"Hello World C external I'm going to be a calculator"<<endl;
}

extern "C" int addC(int no_one, int no_two)
{
    return no_one + no_two;
}
int substract(int no_one, int no_two)
{
    return no_one - no_two;
}
float divide(int no_one, int no_two)
{
    if(no_two == 0 ){
        cout <<"You cannot divide by 0"<<endl;
    }
    return no_one / no_two;
}
float multiplication(int no_one, int no_two)
{

    return no_one * no_two;
}
int no_one;
int no_two;
void UserInput()
{
    cout<<"Input number one: "<<endl;
    cin>>no_one;
    cout<<"Input number two: "<<endl;
    cin>>no_two;

}
int main(int argc, char *argv[])
{
    for(int i = 1; i < argc; i++)
    {
        int switch_list = stoi(argv[i]);

        switch (switch_list){
            case 1:
                HelloWorldC();
                break;
            case 2:
                cout << addC(no_one, no_two) << endl;
                break;
            case 3:
               cout<< substract (no_one, no_two) << endl;
                break;
            case 4:
                cout<<divide(no_one, no_two) << endl;
                break;
            case 5:
                cout<<multiplication(no_one, no_two) << endl;
                break;
        }
    }
}






