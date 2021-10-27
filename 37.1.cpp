//Extended Euclid algorithm - Number Theory advanced
#include"bits/stdc++.h"
using namespace std;
#define int long long 
const int N = 1e5+2, MOD = 129+7;
//ax + by = gcd(a,b)

struct triplet
{
    int x,y,gcd;
};

triplet extendedEuclid(int a, int b)
{
    if(b == 0)
    {
        triplet ans;
        ans.x = 1;
        ans.gcd = a;
        ans.y = 0;
        return ans;
    }

    triplet smallAns = extendedEuclid(b,a%b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a/b)*smallAns.y;
    return ans;
}

signed main()
{
    int a,b;
    cin>>a>>b;

    triplet ans = extendedEuclid(a,b);
    cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y<<endl;
    return 0;
}