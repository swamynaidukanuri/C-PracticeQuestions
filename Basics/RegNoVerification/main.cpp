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
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string regNumber;

    while(1)
    {
        cout << "Enter Reg.Number:";
        cin >> regNumber;
        if (regNumber.length() == 6)
        {
            if (isalpha(regNumber[0]))
            {
                if( isdigit(regNumber[3]) && isdigit(regNumber[4]) && isdigit(regNumber[5]) )
                {
                    cout << "Registration Number Verified.." << endl;
                    break;
                }
                else
                {
                    cout << "Sorry Enter Again" << endl;
                }
            }
            else
            {
                cout << "Sorry Enter Again" << endl;
            }
        }
        else
        {
            cout << "Sorry Enter Again" << endl;
        }
    }
    return 0;
}
