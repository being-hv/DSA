#include <iostream>
using namespace std;

// duplicate values in an array
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Duplicate values in the array: ";
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}