/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string c[10]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            cout<<"even"<<endl;
            continue;
        }else{
            cout<<"odd";
        }
        cout<<endl;
    }
    return 0;
} */
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string const number[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i > 9)
            cout << (i % 2 ? "odd" : "even") << endl;
        else
            cout << number[i - 1] << endl;
    }
    return 0;
}