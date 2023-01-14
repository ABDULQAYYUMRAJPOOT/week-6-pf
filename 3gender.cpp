#include <iostream>
using namespace std;
string checktitle(int age, char gender);


main()
{
    int age;
    char gender;
    string result;
    cout<< "Enter your age: ";
    cin>> age;
    cout<< "Enter your gender f or m: ";
    cin>> gender;
    result = checktitle(age, gender);
    cout<<"Your title is: "<< result;


}

string checktitle(int age, char gender)
{
    string title;
    if (age<=16 && gender == 'm')
    {
        title = "Mr.";
    }
    else if (age>16 && gender == 'm')
    {
        title = "Master";
    }
    else if (age>16 && gender == 'f')
    {
        title = "Miss";
    }
    else if (age<=16 && gender == 'f')
    {
        title = "Ms.";
    }
    return title;
}