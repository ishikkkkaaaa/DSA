#include<iostream>
using namespace std;

pair<int, int> stairCaseSearch(int arr[][4], int n, int m, int key)
{
    //IF NOT PRESENT
    if (key<arr[0][0] || key>arr[n - 1][m - 1])
    {
        return { -1,-1 };
    }
    //staircase Approach
    int i = 0; //first row
    int j = m - 1; //last columns

    while (i < n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            return { i, j };
        }
        else if (arr[i][j] >= key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return { -1,-1 };
}

int main()
{
    int arr[][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int n = 4;
    int m = 4;

    pair<int, int> coords = stairCaseSearch(arr, n, m, 33);
    cout << coords.first << " " << coords.second << endl;
    return 0;

}

//g++ -std=c++11 3-ArraySortedSearch.cpp 
//./a.out
