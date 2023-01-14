#include <iostream>
using namespace std;
float discount(float price, string day, string month);


main()
{
    float price, result;
    string day, month;
    cout<<"Enter the price: ";
    cin>> price;
    cout<<"Enter the day: ";
    cin>> day;
    cout<< "Enter the month: ";
    cin>> month;
    result = discount(price, day, month);
    cout<<"Your payable amount is: "<< result;

}

float discount(float price,string day, string month)
{
    float final;
    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        final = price - (price* 10/100) ;
    }
    if (day == "monday" && (month == "november" || month == "december"))
    {
        final = price - (price* 5/100) ;
    }
    else {
        final = price ;
    }
    return final;
}


