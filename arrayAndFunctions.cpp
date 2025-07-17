#include <iostream>
using namespace std;

//to accept the data in an array, pass it to the function & display the sum of array
void displaySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
}

int main()
{
    const int size = 5;
    int myArray[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> myArray[i];
    }

    displaySum(myArray, size);
    return 0;
}