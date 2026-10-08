#include <iostream>
using namespace std;

class Product
{
private:
    string productName;
    int productId;
    float price;

public:
    void input()
    {
        cout << "Enter product name: ";
        cin >> productName;

        cout << "Enter product ID: ";
        cin >> productId;

        cout << "Enter price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();

    return 0;
}