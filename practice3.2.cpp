// Multiple languages robot
#include <iostream>
using namespace std;

int main()
{
    char button;

    cin >> button;
    cout << "Input a character : " << button << endl;

    /* if(button=='a'){
        cout<<"Hello"<<endl;
    }
    else if(button=='b'){
        cout<<"Namaste"<<endl;
    }
    else if(button=='c'){
        cout<<"Salute"<<endl;
    }
    else if(button=='d'){
        cout<<"Hola"<<endl;
    }
    else if(button=='e'){
        cout<<"Ciao"<<endl;
    }
    else{
        cout<<"I am still learing more"<<endl;
    } */

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Salute" << endl;
        break;
    case 'd':
        cout << "Hola" << endl;
        break;
    case 'e':
        cout << "Ciao" << endl;
        break;

    default:
        cout << "I am still learing more!" <<endl;
        break;
    }
    return 0;
}