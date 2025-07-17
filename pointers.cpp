#include <iostream>
using namespace std;

// pointers

// a pointer is a variable that stores address of another variable
// a star in the declaration that it's a pointer "*p"
// it is called indirection or de-reference operator
// an address of the variable is captured using "&" before the variable name

void main_before()
{
    int n;
    n = 10;
    int *p;
    p = &n;
    cout << n << "\n";  // value of n
    cout << *p << "\n"; // value of n's address
    cout << &n << "\n"; // n's address
    cout << &p << "\n"; // p's address
    cout << p << "\n";  //  n's address
}

void main_before_2()
{
    int x;
    int *p;
    p = &x;
    *p = 100;
    cout << &x << "\n"; // address of x
    cout << p << "\n";  // address of x
    cout << &p << "\n"; // address of p
    cout << x << "\n";  // x=*p
    cout << *p << "\n"; //*p=x
}

int main()
{
    int x, y, z, *p;
    p = &z;
    *p = 5;
    cout << z << " " << *p << "\n";
    ++*p;
    cout << z << " " << *p << "\n";
    p = &y;
    *p = 10;
    cout << y << " " << *p << "\n";
    ++*p;
    cout << y << " " << *p << "\n";
    p = &x;
    *p = 15;
    cout << x << " " << *p << "\n";
    ++*p;
    cout << x << " " << *p << "\n";
    cout << x << " "<< y << " "<<z;
}