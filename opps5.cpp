//Inheritance
//Q1.Which type of inheritance is this?
//Multilevel Inheritance
//Q2.Write the name of all the members,which are directly accessible by the member function Give() of class Middle.
//Data Members:Labs
//Member Function:Put(),Get(),
//Take(),Give()
//Q3.Write the names of all the members which are directly accessible by the member function Out() of class Top.
//Data members:Roof
//Member Function: Take(), Give(),
//In(),out()
//Q4.Write the names of all the members, which are directly accessible by the object T of class TOP declared in main() function
//Take(),Give(),In(),out()
#include<iostream>
using namespace std;

class Ground {
    int Rooms;
protected:
    void put();
public:
    void get();
};
class Middle: private Ground {
    int Labs;
Pubilc:
    void Take();
    void Give();
};
class Top: public Middle {
    int Roof;
    public:
    void In();
    void Out();
};

int main()
{
    A obj;
    
    return 0;
}

