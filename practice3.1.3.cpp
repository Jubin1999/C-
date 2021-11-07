//Print all prime numbers between a and b
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cout<<"Enter the first number : "<<a<<endl;
    cin>>b;
    cout<<"Enter the second number : "<<b<<endl;

    for(int i=a; i<=b; i++){
        int j;
        for(j=2; j<i; j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<j<<endl;
        }
    }
    return 0;
}