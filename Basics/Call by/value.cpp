#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("Value of a and b is %d %d", a, b);
    return 0;
}

//here values remains the same, after swapping cuz pass by values
// what i mean is that x and y is swapped and not a and b
//this method prefered iff return value is passed.