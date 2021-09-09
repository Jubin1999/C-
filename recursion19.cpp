//Count the number of paths possible in a maze

#include<iostream>

using namespace std;

int countPathMAze(int n, int i,int j){

    if(i==n-1 && j==n-1){
        return 1;
    }

    if(i>=n || j>=n){
        return 0;
    }
    return countPathMAze(n,i+1,j) + countPathMAze(n,i,j+1);
}

int main()
{
    cout<<countPathMAze(3,0,0)<<endl;

    return 0;
}