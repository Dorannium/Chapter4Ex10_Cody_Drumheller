/*
Title: Chapter 4 Exercise 10 - Days in a Month
File Name: Chapter4Ex10_Cody_Drmuheller
Programmer: Cody Drumheller
Date:20241025
Requirements:
Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year. 
The program should then display the number of days in that month. Use the following criteria to identify leap years.

*/
#include <iostream>

using namespace std;

bool isLeapYear(int year) {

    if (year % 100 == 0) {
        return (year % 400 == 0);
    }
    else {
        return (year % 4 == 0);
    }
}

int main() {
    int month, year, days;

    cout << "Enter the month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a number between 1 and 12." << endl;
        return 1;
    }

    cout << "Enter the year: ";
    cin >> year;

    switch (month) {
    case 1:  
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
        days = 31;
        break;
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        days = 30;
        break;
    case 2: 
        if (isLeapYear(year)) {
            days = 29;
        }
        else {
            days = 28;
        }
        break;
    }

    cout << "The number of days in month " << month << " of year " << year << " is: " << days << " days." << endl;

    return 0;
}
