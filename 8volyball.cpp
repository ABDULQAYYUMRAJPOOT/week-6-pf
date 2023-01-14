#include <iostream>
using namespace std;
#include <cmath>
float voly(float holiday, float hometown, string year);


main()
{
    string year;
    float holiday, hometown, result;
    cout <<"Is it leap year of Normal? ";
    cin>> year;
    cout<<"Enter no. of holidays: ";
    cin>> holiday;
    cout<<"Enter no. of hometown weekend: ";
    cin >> hometown;
    result = voly(holiday,hometown, year);
    cout<<"You played "<<result <<" times in year.";

}


float voly(float holiday, float hometown, string year)
{
    float hplay, homePlay, final, result;
    hplay = holiday * 2/3;
    homePlay = (48 - hometown) * 3/4;
    result  = hplay + homePlay + hometown;
    if(year == "normal")
    {
        final = result;
    }
    if(year == "leap")
    {
        final = result + (result)*15/100;
    }
    return floor(final);
}