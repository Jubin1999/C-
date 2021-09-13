#include"bits/stdc++.h"
using namespace std;

class jubin
{
private:
    int real, imag;
    public:
        jubin(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
    jubin operator + (jubin const &obj){
        jubin res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display(){
        cout<<real<<" + i"<<imag << endl;
    }
};

int32_t main()
{
    jubin c1(12,7), c2(6,7);
    jubin c3 = c1 + c2;
    c3.display();
    return 0;
}