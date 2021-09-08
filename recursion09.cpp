//Print String in Reverse
//Reverse a string using recursion
#include<iostream>
using namespace std;

void reverse(string s){

    if(s.length()==0){
        return;
    }
    string ros =s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main ()
{
    reverse("Jubin");
    return 0;
}