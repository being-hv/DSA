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
    int nn = sizeof(arr) / sizeof(arr[0]);
    int l_largest = 0;
    int secondLargest = 0;
    for (int i = 0; i < nn; i++)
    {
        if (arr[i] > l_largest)
        {
            secondLargest = l_largest;
            l_largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != l_largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << endl;

    cout << "The reversed array is : " << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Checking if the array is sorted or not.. ";
    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }
    if (isSorted)
    {
        cout << "the array is sorted." << endl;
    }
    else
    {
        cout << "the array is not sorted." << endl;
    }

    return 0;
}                     