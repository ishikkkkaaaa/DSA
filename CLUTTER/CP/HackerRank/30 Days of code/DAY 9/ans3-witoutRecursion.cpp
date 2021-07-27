#include <iostream>
using namespace std;

int main()
{
    int n;
    int result = 1;
    cin >> n;

    if (n <= 1)
    {
        cout << 1;
    }
    else
    {
        for (int i = n; i > 1; i--)
        {
            result = result * i;
        }
        cout << result;
    }
    return 0;
}