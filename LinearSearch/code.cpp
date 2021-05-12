#include <iostream>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
    //for traversing
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int arr[n];
    int key;

    cout << "Enter the number of elements you want in the Array:" << endl;
    cin >> n;

    cout << "Enter the values:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the key you want to find!" << endl;
    cin >> key;

    cout << "index of array is " << linearSearch(n, arr, key);
}