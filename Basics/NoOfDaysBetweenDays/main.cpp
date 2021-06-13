/**
 * Copyright public
 *
 * This file is part of student exercise.
 *
 * \author Swamy Kanuri, swamynaidukanuri@gmail.com
 *
 * \file main.cpp
 * For further information or for explanation drop me a email swamynaidukanuri@gmail.com.
 *
 */
/**
* Explanation:
*Leap year : 366 days (E.g.1804,1940,2000), Non-leap year:365 days(E.g: 1801,1941,2019)
*How to find leapYear? If year
case 1: divisible by 4 and not divisible by 100
case 2: divisible 4, divisible 100 and divisible 400.
*Which month decide year is leap year or not? Feb month will decide, leap Feb:29 days, non-leap Feb:28days
* key for solution:
* we will calculate all the days from 00/00/00 to user inputed date e.g date1:13/06/2021 ,let sum will be : x
* same will calculate for other date as well e.g date2:16/06/2020, let say sum will be y, so result = x - y.
*/
#include <iostream>
#include <cstdio> // for getchar()
#include <cstdlib> //for abs(-365) -> 365

using namespace std;

// structure to hold the date.
struct Date
{
    int dd;
    int mm;
    int yyyy;
};

// Array to hold the months no of days.
const int MonthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int NoOfLeapYearsTillDate(const Date& date)
{
    int year = date.yyyy;

    if (date.mm <= 2) // if before feb means no need to consider this year to check leap year.
        year--;
    return year/4 - year/100 + year/400; // calculate total leap years
}

void diffBwDates(const Date& date1, const Date& date2)
{
    long sumOfDatesInDate1 = 365 * date1.yyyy + date1.dd; // years * current  year + current date.
    sumOfDatesInDate1 += NoOfLeapYearsTillDate(date1); //  add of leap years till date to total
    for(int i = 0; i < date1.mm - 1; i++) // date1.mm - 1, because you should not add continuing month days again, which we add in line 52 date1.dd
        sumOfDatesInDate1 += MonthDays[i];

    long sumOfDatesInDate2 = 365 * date2.yyyy + date2.dd; // years * current year + current date.
    sumOfDatesInDate2 += NoOfLeapYearsTillDate(date2); //  add of leap years till date to total
    for(int i = 0; i < date2.mm - 1; i++) // date1.mm - 1, because you should not add continuing month days again, which we add in line 52 date1.dd
        sumOfDatesInDate2 += MonthDays[i]; // adding the number of months days to total.

    cout << "Difference between two dates in days is:" << abs(sumOfDatesInDate1 - sumOfDatesInDate2) << endl;
}
int main()
{

    Date date1;
    Date date2;

    cout << "Enter date1 (e.g dd/mm/yyyy):";
    cin >> date1.dd;
    getchar(); // to capture "/"
    cin >> date1.mm;
    getchar();// to capture "/"
    cin>> date1.yyyy;

    cout << "Enter date2 (e.g dd/mm/yyyy):";
    cin >> date2.dd;
    getchar(); // to capture "/"
    cin >> date2.mm;
    getchar();// to capture "/"
    cin>> date2.yyyy;

    diffBwDates(date1, date2);

    return 0;
}
