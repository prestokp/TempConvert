/*
 * Kirk Preston
 * 06/11/19
 * TempConvert.cpp
 * Ask for the date and temperature in F and
 * convert it to C
 */

// Header files
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//Global variables
//Month Names
const string MONTHS[12]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Aug", "Sep", "Oct", "Nov", "Dec"};

int main()
{
    int month, //month number (1-Jan, 12-Dec)
        day,   //day of the month (1 through 31)
        year; //current year
        double f, //temperature in Fahrenheit
            c; // temperature in Celsius


    //Get info from the user
    cout << "What is the current year? ";
    cin >> year;
    cout << "What is the current month (1-12 for Jan-Dec)? ";
    cin >> month;
    cout << "What is the current day (1-31)? ";
    cin >> day;
    cout << "What is the temperature in degrees fahrenheit? ";
    cin >> f;

    //convert fahrenheit to celsius
    c = (5.0/9.0) * (f-32.0);

    //output the results
    cout << endl << endl;
    cout << "Date: " << MONTHS[month-1] << " " << day
        << ", " << year << endl;
    cout << "Fahrenheit: " << f << '\370' << "F\n";
    cout << "Celsius: " << c << '\370' << "C\n";

    //Make sure we place the end message on a new line
    cout << endl;

    //The following is system dependent. It will only work on Windows
    //system("Pause");

    //This is the non-system dependent 'pause' method
    cout << "Press any key to continue";
    cin.get();

    return 0;
}