#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main()
{
    int arr[] = { 2,4,9,6,3,8,3,1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    //for sorting we just use inbuilt function sort[start,end)
    sort(arr, arr + n, compare);

    //if we want to reverse sort
    //reverese(a,a+1);

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}