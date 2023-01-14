#include <iostream>
using namespace std;
float afterTrans(float budget, float people);
float ticketPrice(float people,float budget,string type);

main()
{
    float budget,people, result, trans, final;
    string type;

    cout<< "Enter the budget: ";
    cin>> budget;
    cout<<"Enter number of people: ";
    cin>>people;
    cout<<"Enter category Normal or VIP: ";
    cin>> type;
    trans = afterTrans(budget,people);
    result = ticketPrice(budget,people,type);
    if(result>trans)
    {
       final= result - trans;
       cout<<"Not enough money! You need "<<final<< " QR.";
    }
    if(result<trans)
    {
       final= trans - result;
       cout<<"Yes! You have "<<final<< "QR left.";
    }
    

}


float afterTrans(float budget,float people)
{
    float final;
    
    if (people>=1 && people<=4)
    {
        final = budget - (budget * 75/100);
    }
    if (people>=5 && people<=9)
    {
        final = budget - (budget * 60/100);
    }
    if (people>=10 && people<=24)
    {
        final = budget - (budget * 50/100);
    }
    if (people>=25 && people<=49)
    {
        final = budget - (budget * 40/100);
    }
    if (people>=50)
    {
        final = budget - (budget * 25/100);
    }
    return final;

}



float ticketPrice(float budget,float people,string type)
{
    float total;
    if(type == "Normal")
    {
        total = people * 249.99;
    }
    if(type == "VIP")
    {
        total = people * 499.99;
    }
     return total;
}