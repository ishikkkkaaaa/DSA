#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while (prev >= 0 and arr[prev] > current)       // while prev is greater than current
        {
            arr[prev + 1] = arr[prev];  // shift the elements to the right
            prev--; // decrement prev
        }
        arr[prev + 1] = current;    // insert current into the right place     
    }
}
int main()
{
    int arr[] = { 2,3,9,7,4,6,1 };
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    cout << "Sorted array is : ";
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
