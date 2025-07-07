#include <iostream>
using namespace std;

// table of numbers
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << " " << endl;
    cout << "Table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    cout << " " << endl;
    cout << ".. completed." << endl;
    return 0;
}