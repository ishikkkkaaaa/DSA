#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //2d vector
    vector<vector<int> > arr = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11}};

    //print vector
    for (int i = 0; i < arr.size(); i++)
    {
        for (int number : arr[i])
        {
            cout << number << " ";
        }
    }
    cout << endl;
    cout<<"After updating-> ";

    //updating any value
    arr[0][0] = 100;
    arr[1][0] += 100;
    
    //print vector
    for (int i = 0; i < arr.size(); i++)
    {
        for (int number : arr[i])
        {
            cout << number << " ";
        }
    }

    return 0;
}