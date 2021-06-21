#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}