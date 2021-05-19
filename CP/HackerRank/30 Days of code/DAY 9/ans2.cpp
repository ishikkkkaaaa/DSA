#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cin >> n;
    int ans = factorial(n);
    cout << ans;
    return 0;
}

int factorial(int n)
{
    int result = 1;

    if (n <= 1)
    {
        return 1;
    }
    else
    {
        result = n * factorial(n - 1);
        return result;
    }
}