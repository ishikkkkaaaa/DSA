#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int arr[1000];
    int temp = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
