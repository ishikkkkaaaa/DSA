#include <iostream>
using namespace std;

int gridWays(int i, int j, int n, int m)
{
    //base case
    if (i == n - 1 && j == m - 1)
    {
        return 1;
    }
    //exceptional, corner cases
    if (i >= n  || j >= m )
    {
        return 0;
    }
    //recursive cases
    int ans = gridWays(i + 1, j, n, m) + gridWays(i, j + 1, n, m);
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << gridWays(0, 0, n, m);

    return 0;
}