#include <iostream>
using namespace std;

int main()
{
    int length, sum = 0;
    cout << "Enter the number of students:" << endl;
    cin >> length;
    int *marks = new int(length);
    cout << "Enter the marks of the students:" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> *(marks);
    }
                                      
    for (int i = 0; i < length; i++)
    {
        sum += *(marks);
    }
    cout << "Sum is " << sum << endl;
    return 0;
}