#include<iostream>
 using namespace std;

 struct Rectangle {
    int length;
    int width;
 };

int main()
{
    struct Rectangle r = {10 ,20};
    struct Rectangle *p  = &r;

    cout << p->length << " " << p->width << endl;
    p->length = 30;
    cout << p->length << " " << p->width << endl;
    cout << "Area=> " <<p->length * p->width << endl;
    return 0;
}