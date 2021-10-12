//Set & multiset
#include<iostream>
#include<set>
using namespace std;

int32_t main(){
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
    s.erase(3);
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
}