#include <iostream>
using namespace std;

// we have numbers from 1 to n (sorted or unsorted) nd exactly one number is missing 
int missingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2; 
    int sum = 0;
    
    for (int i = 0; i < n - 1; i++) { 
        sum += arr[i];
    }
    
    return total - sum; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the array (including the missing number): ";
    cin >> n;

    int arr[n - 1]; 
    cout << "Enter " << n - 1 << " elements (from 1 to " << n << "): ";
    
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missing = missingNumber(arr, n);
    cout << "The missing number is: " << missing << endl;

    return 0;
}