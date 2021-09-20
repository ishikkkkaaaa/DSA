#include <iostream>
using namespace std;

class Product
{
//by default, private!
    int id;
    char name[100];

public:
    int mrp;
    int selling_price;
};

int main()
{
    Product camera; //object created,occupying some memory

    //we cannot read or write the private memebrs!

    /*     camera.id = 1;
    camera.name = "Canon"; */

    camera.mrp = 12000;
    camera.selling_price = 12000;

    /*     cout << "id: " << camera.id << endl;
    cout << "name: " << camera.name << endl; */

    cout << "mrp: " << camera.mrp << endl;
    cout << "selling_price: " << camera.selling_price << endl;
    return 0;
}