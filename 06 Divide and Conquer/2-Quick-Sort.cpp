#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    //bring pivot to its og psoition
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quickSort(vector<int> &arr, int s, int e)
{
    //base case
    if (s >= e)
    {
        return;
    }
    //recurssive case
    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr{2, 6, 3, 4, 8, 9, 1, 0};
    int n = arr.size();

    quickSort(arr, 0, n - 1);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}