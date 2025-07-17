#include <iostream>
using namespace std;

// first function usages
int max(int a, int b)
{
    // if (a > b)
    // {
    //     return a;
    // }
    // else
    // {
    //     return b;
    // }
    return (a > b ? a : b);
}
int main()
{
    int x, y;
    cout << "Enter two integers to compare: ";
    cin >> x >> y;
    cout << "The max of " << x << " and " << y << " is: ";
    cout << max(x, y) << "\n";
    cout << "Back to main.";
    return 0;
}