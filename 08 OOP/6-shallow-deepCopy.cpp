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
    //setters!
    void setName(const char *name)
    {
        strcpy(this->name, name);
        //name->name;
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
    Product(int id, char *n, int mrp, int selling_price)
    {
        this->id = id;
        this->mrp = mrp;
        this->selling_price = selling_price;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    //Copy Constructor
    Product(const Product &X)
    {
        id = X.id;
        //strcpy(name, X.name);
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
    Product oldCamera(101, "GoProHero9", 28000, 26000);

    //copy constructor
    Product webcam(camera);

    oldCamera.setName("sony");
    oldCamera.showDetails();
    camera.showDetails();

    /* camera.showDetails();

    webcam.setMrp(1000);
    webcam.showDetails();
 */
    return 0;
}