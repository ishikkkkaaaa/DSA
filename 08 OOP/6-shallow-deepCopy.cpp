#include <iostream>
using namespace std;

class Product
{
    int id;
    char *name;
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
    //Constructor
    Product()
    {
        cout << "GETS CALLED AUTOMATICALLY by line 47" << endl;
    }

    //Constructor
    Product(int id, const char *name, int mrp, int selling_price)
    {
        cout << "PARAMETRIZED_CONSTRUCTOR" << endl;
        this->id = id;
        name-new char[strlen(n)+1]
        strcpy(this->name, name);
        this->mrp = mrp;
        this->selling_price = selling_price;
    }

    //Copy Constructor
    Product(const Product &X)
    {
        id = X.id;
        strcpy(name, X.name);
        mrp = X.mrp;
        selling_price = X.selling_price;
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
    void showDetails()
    {
        cout << "ID: " << id << endl;
        cout << "NAME: " << name << endl;
        cout << "MRP: " << mrp << endl;
        cout << "SELLING PRICE: " << selling_price << endl;
    }
};

int main()
{
    //Product camera;

    Product camera(101, "GoProHero9", 28000, 26000);
    //copy constructor
    Product webcam(camera);

    camera.showDetails();

    webcam.setMrp(1000);
    webcam.showDetails();

    return 0;
}