void printAll(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    printAll(arr, 5);
    return 0;
}