#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    //order of matrix
    cin >> n;
    //matrix values
    int MAT[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> MAT[i][j];
        }
    }

    //first diagonal
    int firstDiagonal = 0;
    for (int i; i < n; i++)
    {
        firstDiagonal += MAT[i][i];
    }

    //second diagonal
    int secondDiagonal = 0;
    for (int i; i < n; i++)
    {
        secondDiagonal += MAT[i][n - i - 1];
    }

    int difference = 0;
    difference = firstDiagonal - secondDiagonal;

    difference = abs(difference);
    cout << difference;

    return 0;
}