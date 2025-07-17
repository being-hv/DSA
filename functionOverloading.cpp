#include <iostream>
using namespace std;

// function overloading is a feature that allows us to define multiple functions with the same name but different parameters
void f(int x)
{
    cout << x << "\n";
}

// void f(double x)
// {
//     cout << x << "\n";
// }

int main (){
    float x = 10.2f;
    double y = 10.2;
    f(x);
    f(y);
}