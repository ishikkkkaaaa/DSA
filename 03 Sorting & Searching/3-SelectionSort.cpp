#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0;i < n;i++)
    {
        int current = i;
        //second loop for unsorted part ie right side

        for (int j = i + 1;j < n;j++)
        {
            if (arr[j] < arr[current])
            {
                current = j;
            }
            swap(arr[i], arr[current]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr, n);
    cout << "Sorted array is : ";
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
