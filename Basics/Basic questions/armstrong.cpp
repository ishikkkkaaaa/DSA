/* Armstrong number is a number that is equal to the sum of cubes of its digits */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int originaln = n;
    while (n > 0)
    {
        int ldigit = n % 10;
        sum += pow(ldigit, 3);
        n = n / 10;
    }

    if (sum == originaln)
    {
        cout << "Armstrong number!!";
    }
    else
    {
        cout << "Oopsie no!";
    }
    return 0;
}