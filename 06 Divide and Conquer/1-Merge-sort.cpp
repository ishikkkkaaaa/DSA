#include <iostream>
#include <vector>
using namespace std;

//helper method
void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int m = (s + e) / 2;
    int j = m + 1;

    vector<int> temp;

    while (i <= m and j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    //copy rem elements from first arr
    while (i <= m)
    {
        temp.push_back(arr[i++]);
    }

    // or copy rem elements from second arr
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    //copy back the eleemtns from temp to original arr
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        arr[idx] = temp[k++];
    }
    return;
}

//sorting method
void mergesort(vector<int> &arr, int s, int e)
{
    //base case
    if (s >= e)
    {
        return;
    }
    //rec case
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    return merge(arr, s, e);
}

int main()
{

    vector<int> arr{10, 5, 2, 0, 7, 6, 4};

    int s = 0;
    int e = arr.size() - 1;
    mergesort(arr, s, e);
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    return 0;
}
