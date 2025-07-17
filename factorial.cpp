#include <iostream>
using namespace std;

// to give factorial without factorial
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    cout << "Factorial of " << n << " is " << result << endl;
    return 0;
}