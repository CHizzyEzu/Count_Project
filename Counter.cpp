// Counter Assignment 
// Junior Ezuma-Ngwu Code Project

/* This program prompts that the user to enter two integers, one between 0 and -30,
and the other between 15 and 30. It then prints all the integers between those ranges, display 10 numbers
per line*/

#include <iostream>
#include <limits>
using namespace std;

int main()
{

    // Asking for users input of first number
    signed int input1;

    do 
    {
        cout << "Enter a number between 0 and -30: ";
        if(!(cin >> input1) || (input1 < -30 || input1 > 0))
        {
            cout << "Invalid input. Please enter a number between 0 and -30. \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    
    // Postest Input loop (This displays first)
    } while (input1 < -30 || input1 > 0);
    
    // Asking for users input of second number
        int input2;

    do
    {
        cout << "Enter another number between 15 and 30: ";
        if(!(cin >> input2) ||(input2 < 15 || input2 > 30))
        {
            cout << "Invalid input. Please enter a number between 15 and 30: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    // Second postest loop
    } while (input2 < 15 || input2 > 30); 

    // Initialize increment variable for the pretest loop
    int count = 0;

    // Pretest loop that creates a new line after an input is incremented 10 times
    for (int c = input1; c <= input2; c++) 
    {
        cout << c << " ";
        count++;

        if (count == 10) 
        {
            cout << "\n";
            count = 0;
        }
    }
    return 0; // code ends
}