#include <iostream>
using namespace std;

//to show all numbers between x & y
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << " " << endl;
    cout << "Numbers from " << x << " to " << y << " are:" << endl;

    if (x < y)
    {
        for (int i = x; i <= y; i++)
        {
            cout << i << " ";
        }
    }
    else if (x > y)
    {
        for (int i = x; i >= y; i--)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << x << " (Both numbers are equal)" << endl;
    }

    cout << endl;
    cout << " " << endl;
    cout << "All numbers between " << x << " and " << y << " are printed." << endl;

    return 0;
}
