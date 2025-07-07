#include <iostream>
using namespace std;

// o(1) - constant time complexity
void printFirstElement(int arr[], int n)
{
    cout << arr[0] << endl;
}

int main_before()
{
    int arr[] = {5, 10, 15, 20, 25};
    printFirstElement(arr, 15);
    return 0;
}

// o(n) - linear time complexity
void printAll(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main_before_2()
{
    int arr[] = {5, 10, 15, 20, 25};
    printAll(arr, 5);
    return 0;
}

// o(n2) - quadratic time complexity
void printPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    printPairs(arr, 5);
    return 0;
}