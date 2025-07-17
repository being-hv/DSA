#include <iostream>
using namespace std;

// function calling & pointers
//  in call by value whatever changes we are making to the formal args will not change actual args

void f(int a, int b){
    a = 100;
    b = 200;
}

void main_before_2(){
    int a = 10, b = 20;
    f(a, b);
    cout << a << " " << b << " ";
}

//illustrate swapping of two variables using call by value & call by pointer

// by call by value (og values ain't swapped)
void f_two(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << " ";
}

void main_before(){
    int a = 10, b = 20;
    f_two(a, b);
}

//by call by pointers (og values are swapped when declared as pointers)
void f_three(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a = 10, b = 20;
    f_three(&a, &b);
    cout << a << " " << b << " ";
}
