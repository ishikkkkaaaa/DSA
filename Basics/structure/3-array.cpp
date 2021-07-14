#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
//returns a pointer of type "struct"
//a structure obj is created in heap and its address is written by this function inside!
struct Rectangle *fun()
{
    //creates an obj of type rectangle on heap using a pointer
    struct Rectangle *p;
    p = new Rectangle;
    //if c
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 15;
    p->depth = 7;
    return p;
}

int main()
{
    struct Rectangle *ptr = fun();

    cout << "Length " << ptr->length << endl
         << "Breadth " << ptr->breadth << endl;
    return 0;
}