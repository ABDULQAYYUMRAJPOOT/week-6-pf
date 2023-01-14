#include <iostream>
using namespace std;
float income(string screen, int rows, int columns);

main()
{
    string screen;
    int rows,columns;
    float result;
    cout<< "Enter type of screen 'premier' or 'normal': ";
    cin>> screen;
    cout<< "Enter number of rows: ";
    cin>> rows;
    cout << "Enter number of columns: ";
    cin>> columns;

    result = income(screen , rows, columns);
    cout<<"Total income is: "<< result <<" Euro";
    

}

float income(string screen, int rows, int columns)
{
    float final;
    if (screen == "premier")
    {
        final = rows * columns * 12.00;
    }
    else if (screen == "normal")
    {
        final = rows * columns * 7.50;
    }
    else if (screen == "discount")
    {
        final = rows * columns * 5.00;
    }
    return final;

}