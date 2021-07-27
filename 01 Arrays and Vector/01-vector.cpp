#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //cretae a vector
    //vector<int> arr;

    vector<int> arr = {2, 3, 4, 5, 6, 1};

    //vector size
    cout << "vector size: " << arr.size() << endl;

    //vector capacity
    cout << "vector capacity: " << arr.capacity() << endl;

    //vector pop_back
    arr.pop_back();

    //vector push_back
    arr.push_back(7);

    //print vector
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
