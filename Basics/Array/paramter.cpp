#include <iostream>
using namespace std;

void fun(int *A, int n)
{
    //we can also change the value, cuz its call by address
    A[0] = 69;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    //a[] is a pointer and size of int is 4 so output is 8/4=2
    //cout << sizeof(A) / sizeof(int) << endl;
}

int main()
{
    int A[] = {2, 3, 5, 7, 1};
    int n = 5;

    fun(A, n);
    /* for (int x : A)
    {
        cout << x << " ";
    } */
    cout << sizeof(A) / sizeof(int) << endl;

    return 0;
}