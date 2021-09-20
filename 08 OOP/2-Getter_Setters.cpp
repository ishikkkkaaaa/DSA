#include <iostream>
using namespace std;

class Product
{
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    //setters!
    void setMrp(int price)
    {
        mrp = price;
    }
    void setSellingPrice(int price)
    {
        if (mrp < price)
        {
            selling_price = price;
        }
        else
        {
            selling_price = mrp;
        }
    }
    //getters!- return the value of the member variable
    int getMrp()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }
};

int main()
{
    Product camera;

    camera.setMrp(100);
    camera.setSellingPrice(12);

    cout << "mrp: " << camera.getMrp() << endl;
    cout << "selling_price: " << camera.getSellingPrice() << endl;
    return 0;
}