#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int mainI()
{
    string s = "498723659";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;

    return 0;
}