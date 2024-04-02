// Counter Assignment 
// Junior Ezuma-Ngwu Code Project

#include <iostream>
using namespace std;

int main()
{
// Asking for users input of first number

    double Input1;

    do 
    {
        cout << "Enter a number between 0 and -30:  ";
        cin >> Input1;

    } while (Input1 <= -30 && Input1 >= 0);


// Asking for users input of second number

    double Input2;

    do 
    {
        cout << "Enter another number between 15 and 30:  ";
        cin >> Input2;


    } while (Input2 > 30 && Input2 < 15); 

    

// Print a new number with a break after 10 numbers 

    int count = 0;

    for (double c = Input1; c <= Input2; c++) 
    {
        cout << c << " ";
        count++;

        if (count == 10) 
        {
            cout << "\n";
            count = 0;
        }

        
    }


    return 0;


}