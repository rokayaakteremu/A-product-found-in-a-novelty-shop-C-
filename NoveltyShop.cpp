#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

class Product
{
    private:
        char idNum[12];
        char Pname[46];
        double Price;
        int Quantity;
    public:
        Product();
        Product(char [], char [],double,int);
        double getPrice();
        int getQuantity();
        void setProductCode( char []);
        void setName(char[]);
        void setPrice(double);
        void setQuantity(int);
        int fulfillOrder(int);
        void print();
};

Product::Product()
{
    idNum[12] = '/0';
    Pname[46] = '/0';
    Price = 0;
    Quantity = 0;
}

Product::Product(char ID[],char PN[], double Pr,int Qu )
{
    setProductCode( ID);
    setName(PN);
    setPrice(Pr);
    setQuantity(Qu);
}

double Product::getPrice()
{
    printf("Price: $%.2lf\n",Price );
    return Price;
}

int Product::getQuantity()
{
    cout<<"Quantitiy: "<<Quantity<<endl;
    return Quantity;
}

void Product::setProductCode(char ID[])
{
    //this.ID = ID;
    strcpy(idNum, ID);
}

void Product::setName(char PN[])
{
    strcpy(Pname, PN);
}

void Product::setPrice( double newPrice)
{
    if(newPrice>=0)
    {
        Price=newPrice;
    }
    else
    {
        Price=0;
    }
}

void Product::setQuantity(int newQuantity)
{
    if(newQuantity>=0)
    {
        Quantity=newQuantity;
    }
    else
    {
        Quantity=0;
    }
}

int Product::fulfillOrder(int orderq)
{
    if(orderq<0)
    {
        orderq=0;
        cout<<"Shipped: "<<orderq<<endl;
    }
    else if( orderq<=Quantity)
    {
        Quantity -= orderq;
        cout<<"Shipped: "<<orderq<<endl;
    }
    else
    {
        orderq=Quantity;
        Quantity = 0;
        cout<<"Shipped: "<<orderq<<endl;

    }
        printf("Order Total: $%.2f\n",(double(orderq)*Price) );
}


void Product::print()
{
        cout<<"Product ID: "<<idNum<<" Product Name: "<<Pname<<" Price: "<<Price<<" Quantity: "<<Quantity<<endl;
}

int main()
{
    Product product1=Product();
    cout<<"Product 1"<<endl;
    product1.print();

    Product product2=Product{"22222222222","Virtual Education Pack",0.99,31};
    cout<<"Product 2"<<endl;
    product2.print();

    Product product3=Product{"33333333333","Dehydrated Water Bed",-12.99,-6};
    cout<<"Product 3"<<endl;
    product3.print();


    cout<<endl<<"*****Product 1 after using the set method*****"<<endl;
    product1.setProductCode("11111111111");
    product1.setName("Flowbee Pet Groomer");
    product1.setPrice(339.99);
    product1.setQuantity(28);
    product1.print();

    cout<<endl<<"*****Product 2 and 3s price and Quantity*****"<<endl;
    cout<<"Product 2 ";
    product2.getPrice();
    cout<<"Product 2 ";
    product2.getQuantity();
    cout<<"Product 3 ";
    product3.getPrice();
    cout<<"Product 3 ";
    product3.getQuantity();
    cout<<endl;

    cout<<"*****Order a negative number of Product 1s*****"<<endl;
    product1.print();
    product1.fulfillOrder(-5);
    product1.print();

    cout<<endl<<"*****Order 12 Product 1s*****"<<endl;
    product1.print();
    product1.fulfillOrder(12);
    product1.print();

    cout<<endl<<"*****Order 4 Products 2s*****"<<endl;
    product2.print();
    product2.fulfillOrder(4);
    product2.print();

    cout<<endl<<"*****Order 45 Products 2s*****"<<endl;
    product2.print();
    product2.fulfillOrder(45);
    product2.print();

    system("pause");
    return 0;
}

