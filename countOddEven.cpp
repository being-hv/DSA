#include <iostream>
using namespace std;

// count of odd/even element in an array
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int oddCount = 0, evenCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Count of even elements: " << evenCount << endl;
    cout << "Count of odd elements: " << oddCount << endl;

    return 0;
}