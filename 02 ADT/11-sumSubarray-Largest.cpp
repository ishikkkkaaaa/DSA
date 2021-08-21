#include <iostream>
using namespace std;

//print all subarrays of a given array using BRUTE FORCE=> O(n^3)
int printSubarrays1(int arr[], int n)
{
    int i, j;
    int largestSum = 0;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            //cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                //cout << sum << " ";
            }
            largestSum = max(largestSum, sum);
            //cout << endl;
        }
        // cout << endl;
    }
    return largestSum;
}

//using prefix sum to find the largest subarray O(n^2)
int printSubarrays2(int arr[], int n)
{
    prefix sum[100] = {0}; //initialize prefix sum array
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i]; //prefix[i] stores sum of all elements till i
    }
    int i, j;
    int largestSum = 0;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {

            //cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            int sum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largestSum = max(largestSum, sum);
            //cout << endl;
        }
        // cout << endl;
    }
    return largestSum;
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
    cout << printSubarrays1(arr, n) << endl;
    cout << printSubarrays2(arr, n) << endl;

    return 0;
}