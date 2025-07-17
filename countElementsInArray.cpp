#include <iostream>
using namespace std;

// we have an array of n elements and we have to take count of every element using vectors
int main()
{
    int n;
    cout << "Enter no. of elements : " << "";
    cin >> n;

    vector<int> elements(n);
    cout << "Enter elements : " << "";
    for (int i = 0; i < n; i++)
    {
        cin >> elements[i];
    }

    vector<int> unique;
    vector<int> count;

    for (int i = 0; i < n; i++)
    {
        int found = -1;
        for (int j = 0; j < unique.size(); j++)
        {
            if (elements[i] == unique[j])
            {
                found = j;
                break;
            }
        }

        if (found != -1)
        {
            count[found]++;
        }
        else
        {
            unique.push_back(elements[i]);
            count.push_back(1);
        }
    }

    for (int i = 0; i < unique.size(); i++)
    {
        cout << unique[i] << " -> " << count[i] << endl;
    }

    return 0;
}