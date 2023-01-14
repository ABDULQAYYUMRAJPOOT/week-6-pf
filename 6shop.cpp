#include <iostream>
using namespace std;
float bill(string city, string product, float quantity);

main()
{
    string city;
    string product;
    float result, quantity;
    cout<<"Enter the city Sofia, Verna or Plovdiv: ";
    cin>> city;
    cout<<"Enter the product 'coffee', 'water', 'beer', 'sweets' or 'peanuts': ";
    cin>> product;
    cout<<"Enter quantity: ";
    cin>> quantity;
    result = bill(city, product, quantity);
    cout<< "Your bill is: "<< result;

}

float bill(string city, string product, float quantity)
{
    float final;
    if(city == "Sofia")
    {
        if(product == "coffee")
        {
            final = quantity * 0.50;
        }
        if(product == "water")
        {
            final =quantity *  0.80;
        }
        if(product == "beer")
        {
            final = quantity * 1.20;
        }
        if(product == "sweets")
        {
            final = quantity * 1.45;
        }
        if(product == "peanuts")
        {
            final = quantity * 1.60;
        }
    }

    if(city == "Plovdiv")
    {
        if(product == "coffee")
        {
            final = quantity * 0.40;
        }
        if(product == "water")
        {
            final = quantity * 0.70;
        }
        if(product == "beer")
        {
            final = quantity * 1.15;
        }
        if(product == "sweets")
        {
            final = quantity * 1.30;
        }
        if(product == "peanuts")
        {
            final = quantity * 1.50;
        }
    }


    if(city == "Verna")
    {
        if(product == "coffee")
        {
            final = quantity * 0.45;
        }
        if(product == "water")
        {
            final = quantity * 0.70;
        }
        if(product == "beer")
        {
            final = quantity * 1.10;
        }
        if(product == "sweets")
        {
            final = quantity * 1.35;
        }
        if(product == "peanuts")
        {
            final = quantity * 1.55;
        }
    }
    return final;
}