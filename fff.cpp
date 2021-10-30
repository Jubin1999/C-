#include <iostream>
using namespace std;
 
int areaSquare(int side)
{
    int area = side * side;
    return area;
}
 
// Driver Code
int main()
{
    int side = 4;
    cout << areaSquare(side);
    return 0;
}