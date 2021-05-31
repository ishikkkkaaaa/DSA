#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    cout << "Number of values?\n";
    cin >> n;
    cout << "Input the values" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    cout << "Values are=>\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    };
    cout << "Reverse array=>\n";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    };
    return 0;
}