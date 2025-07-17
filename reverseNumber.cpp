#include <iostream>
using namespace std;

// to reverse a number 

int main(){
    int num, rev = 0;
    cout << "Enter an integer to reverse: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10; 
        rev = rev * 10 + digit; 
        num /= 10; 
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}