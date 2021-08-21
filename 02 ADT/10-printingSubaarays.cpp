#include <iostream>
using namespace std;

//print all subarrays of a given array
void printSubarrays(int arr[], int n)
{
    int i, j;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            //cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << sum;
            cout << endl;
        }
        // cout << endl;
    }
}

int main()
{
    int arr[] = {10,
                 20,
                 30,
                 40,
                 50,
                 60};

    int n = sizeof(arr) / sizeof(arr[0]);
    printSubarrays(arr, n);
    return 0;
}