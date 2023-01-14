#include <iostream>
using namespace std;
int isgreater(int num1,int num2,int num3);

main()
{
    int num1,num2,num3, result;
    cout<< "Enter first number: ";
    cin>>num1;
    cout<< "Enter second number: ";
    cin>>num2;
    cout<< "Enter third number: ";
    cin>> num3;

    result = isgreater(num1, num2, num3);
    cout<< "Maximum is: "<< result;

    
}


int isgreater(int num1, int num2, int num3)
{
    int greatest;
    if (num1>num2 && num1>num3)
    {
        greatest = num1;
    }
    
    else if(num2>num1 && num2> num3)
    {
        greatest = num3;
    }
    
    else if (num2<num3 && num3>num1)
    {
        greatest =  num3;
    }
    return greatest;
    
}

