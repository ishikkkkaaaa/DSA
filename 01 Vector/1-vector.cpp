#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<int> arr;  //intializes the
    vector<int> arr = { 1, 2, 3, 4, 5, 10 };

    //push back O(1)
    arr.push_back(100);

    //size of vector(number of elements)
    cout << arr.size() << endl;

    //capacity(size of memory)
    cout << arr.capacity() << endl;

    //print all elements
    for (int i = 0;i < arr.size();i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}