#include <iostream>
using namespace std;

//print all pairs of elements in the array
void printPairs(int arr[], int n)
{
    //print all elements
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    printPairs(arr, n);

    return 0;
}