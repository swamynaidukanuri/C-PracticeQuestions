/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question: The user enters two integers. It is necessary to output all integers, by which both entered numbers are divisible without remainder.
*/

/**
@Concept:
Iterate through the loop and check iterator divisible by entered numbers;
*/

#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter Num1:";
    cin >> num1;
    cout << "Enter Num2:";
    cin >> num2;

    for(int i = 1; i <= 1000; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
