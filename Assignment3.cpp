#include <iostream>
using namespace std;
    class Product
    {
        int Sales[12];
        string product;
        int price;
        int quantity;
        int bill;
        int total;
        void getData()
        {
            cout<<"Enter the Product Name: ";
            cin>>product;
            cout<<"Enter the Product Price: ";
            cin>>price;
        }
        void calculate()
        {
             for(int i=0;i<12;i++)
        {
            cout<<"Enter quantity sold in month "<<i+1<<": ";
            cin>>quantity;
            bill=quantity*price;
            Sales[i]=bill;
        }
        }
        void display()
        {
            for(int i=0;i<12;i++)
            {
                total+=Sales[i];
                cout<<"The Sales of the month "<<i+1<<" is: "<<Sales[i]<<endl;
            }
            cout<<"Product Name: "<<product<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Total Sales: "<<total<<endl;
        }
    };

    int main()
    {
        Product p;
        p.getData();
        p.calculate();
        p.display();
        return 0;
    }
