#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i=0; i < n; i++)       // outer loop
    {
        // inner loop
        for (int j = 0;j < n - i - 1;j++)              
        //repeated swapping 
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = { 2,3,9,7,4,6,1 };
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    cout << "Sorted array is : ";
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
