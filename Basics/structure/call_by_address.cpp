#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *r1)
{
    r1->length = 20;
    cout << "Length " << r1->length << endl
         << "breadth " << r1->breadth << endl;
}

int main()
{
    struct Rectangle r = {10, 5};
    fun(&r);
    cout << "Here also length gets changed!" << endl;
    cout << "Length " << r.length << endl
         << "breadth " << r.breadth << endl;

    return 0;
}