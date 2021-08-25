#include<iostream>
using namespace std;

int main()
{
    int sidea,sideb,sidec;
    cout<<"Input three sides of thiangle:"<<endl;
    cin>>sidea>>sideb>>sidec;

    if(sidea==sideb && sidea==sidec)
    {
        cout<<"This is an equilateral triangle."<<endl;
    }
    else if(sidea==sideb||sideb==sidec||sidec==sidea)
    {
        cout<<"This is an isosceles triangle."<<endl;
    }
    else{
        cout<<"This is a scalene triangle."<<endl;
    }
    return 0;
}