#include <iostream>
using namespace std;

// to have an array of 5 elements and print it
//  int main(){
//      int arr[5];
//      arr[0] = 10;
//      arr[1] = 20;
//      arr[2] = 30;
//      arr[3] = 40;
//      arr[4] = 50;
//      for (int i = 0; i < 5; i++){
//          cout << arr[i] << " ";
//      }
//  }

// to take an array as input of n elements and print it
int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:" << " ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements in the array are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "The array average is :" << endl;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    double average = sum / n;
    cout << average << endl;

    cout << "The largest element in array is : " << endl;
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;

    cout << "The second largest element in array is : " << endl;
    int secondLargest = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << endl;

    return 0;
}