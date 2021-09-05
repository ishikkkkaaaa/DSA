#include <iostream>
#include<vector>

using namespace std;

//n=>i for recurssion
//n=>till what numbers
//value=>starting number

void printArray(vector<int> array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
//shared accross all function calls, cuz shared by refrenece,if it was to be by vlaue, toh vector would have gotten destroyed
void fillArray(vector<int> &array, int i, int n, int value)
{
    //base case
    if (i == n)
    {
        //print array
        printArray(array, n);
        return;
    }

    //recursive case
    array[i] = value;
    fillArray(array, i + 1, n, value + 1);
    //backtracking step
    array[i] = -1 * array[i];
}

int main()
{
    vector<int> array(100, 0);
    int n;
    cin >> n;
    fillArray(array, 0, n, 1);
    printArray(array, n);
    return 0;
}
