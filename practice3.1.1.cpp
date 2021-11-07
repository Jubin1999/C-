//One to hundred natural number but 3 se divisible hone wala print na ho
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}