#include <iostream>
using namespace std;
char grade(int num);

main()
{
    int num;
    
    cout<< "Enter your numbers: ";
    cin>> num;
    cout<< "Your grade is: "<< grade (num);


}


char grade(int num)
{
    char grade;
    if (num< 50)
    {
         grade = 'F';
    }
    else if(num<=60 && num>=50)
    {
         grade = 'E';
    }
    else if(num<=70 && num>=61)
    {
         grade = 'D';
    }
    else if(num<=80 && num>=71)
    {
         grade = 'C';
    }
    else if(num<=85 && num>=81)
    {
         grade = 'B';
    }
    else if (num>85 && num>=100)
    {
        grade = 'A';
    }
    return grade;
}