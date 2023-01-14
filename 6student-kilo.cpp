#include <iostream>
using namespace std;
float fare(string time, float km);


main()
{
    string time;
    float km, result;

    cout<< "Enter time of travel day or night: ";
    cin>>time;
    cout<< "Enter the distance in km: ";
    cin>> km;
    result = fare(time,km);
    cout<<"Cheapest fare is: "<< result <<" EUR";

}


float fare(string time, float km)
{
    float final;
    if (km>=20 && km<100)
    {
        final = km * 0.09;
    }
    else if (km>=100)
    {
        final = km * 0.06;
    }


    // bus

    else if(km<20 && time == "day")
    {
        final = km * 0.79;
    }
    else if(km<20)
    {
        final = km * 0.90;
    }
    return final;
}


//incomplete