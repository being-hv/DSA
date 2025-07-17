#include <iostream>
using namespace std;

// ref var is an alias or another name for the variable

// int main(){
//     int x = 100;
//     int &r = x;
//     cout << &x << "\n";
//     cout << x << "\n";
//     cout << &r << "\n";
//     cout << r << "\n";
// }

void f(int &x, int y)
{
    ++x;
    ++y;
}

int main()
{
    int x = 10, y=20;
    f(x,y);
    cout << x << "\n";
    cout << y << "\n";
}