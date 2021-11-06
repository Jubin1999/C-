//Program to display multiplication table upto 10.
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cout<<"Enter a positive integer : "<<n<<endl;
    cin>>n;

    for(int i=1; i<=10; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}