#include <iostream>
using namespace std;

// default arguments
void f(int a = 100, int b = 20, int c=30)
{
    cout << a+b+c << "\n";
}

int main()
{
    f();
    f(100);
    f(100, 200);
    f(100, 200, 300);
}