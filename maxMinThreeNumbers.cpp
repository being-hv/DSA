#include <iostream>
using namespace std;

// to find max/min of three numbers using ternary operator

int maxOfThree(int a, int b, int c) {
    return (a > b ? (a > c ? a : c) : (b > c ? b : c));
}

int minOfThree(int a, int b, int c) {
    return (a < b ? (a < c ? a : c) : (b < c ? b : c));
}

int main(){
    int x, y, z;
    cout << "Enter three integers to compare: ";
    cin >> x >> y >> z;
    cout << "The max of " << x << ", " << y << ", and " << z << " is: ";
    cout << maxOfThree(x, y, z) << "\n";
    cout << "The min of " << x << ", " << y << ", and " << z << " is: ";
    cout << minOfThree(x, y, z) << "\n";
    cout << "Back to main.";
    return 0;
}
