/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question : The user enters an integer. It is necessary to output all integers by which a given number is divisible without remainder.
*/

/**
@Concept:
Iterate through a loop till number and check loop iterator variable is divisible by number
*/
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter Number:";
    cin >> number;

    for(int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
