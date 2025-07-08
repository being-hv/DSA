#include <iostream>
using namespace std;

// first function usages
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    cout << "Enter two integers to add: ";
    cin >> x >> y;
    cout << "The sum of " << x << " and " << y << " is: ";
    cout << add(x, y) << "\n";
    cout << "Back to main.";
    return 0;
}