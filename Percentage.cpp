#include<iostream>
using namespace std;

int main(){
    int per;
    cout<<"Enter your percentage"<<endl;
    lblper:
    cin>>per;
    if(per>=80&&per<=100)
    cout<<"your gread A1";
    else if(per>=70&&per<=79)
    cout<<"your gread A";
    else if(per>=60&&per<=69)
    cout<<"your gread B";
    else if(per>=50&&per<=59)
    cout<<"your gread C";
    else if(per>=40&&per<=49)
    cout<<"your gread D";
    else if(per<40)
    cout<<"your are fail";
    {
        if(per>100)
        cout<<"Try again"<<endl;
    }
    goto lblper;
}