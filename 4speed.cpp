#include <iostream>
using namespace std;
string sfunction(float speed);

main()
{
    float speed;
    string result;
    cout<<"Enter your speed: ";
    cin>> speed;
    result = sfunction(speed);
    cout<<result;

}


string sfunction(float speed)
{
    string final;
    if (speed <= 10)
    {
        final = "Slow";
    }
    else if (speed > 10 && speed <=50)
    {
        final = "Average";
    }
    else if (speed > 50 && speed <=150)
    {
        final = "Fast";
    }
    else if (speed > 150 && speed <=1000)
    {
        final = "Ultra fast";
    }
    else if (speed > 1000 )
    {
        final = "Meet me in the heaven";
    }
    return final;
}