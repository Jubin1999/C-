#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int n,q,r,s;
    cin>>n;
    q=n;
    s=0;
    while(q>0){
        r=q%10;
        s=s+r*r*r;
        q=q/10;
    }
    if(n==s){
        cout<<"Amostrong number"<<endl;
    }
    else{
        cout<<"not amstrong number"<<endl;
    }
    return 0;
}