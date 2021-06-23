/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
The user enters any integer A.
You should output all integers B for which A is divisible by B * B without remainder and is not divisible by B * B * B without remainder.
*/

/**
Concept:
1. We need to iterate till the user entered number.
2. In each iteration, we should find square and cube of the number.
3. and have a condition check to verify current iteration number i is divisible of number and not divisible of number
*/

#include <iostream>
using namespace std;

int main()
{
    int number;
    int squareOfCurrentNumber;
    int cubeOfCurrentNumber;
    cout << "Enter Number:";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        squareOfCurrentNumber = i * i; // square of current iterator number
        cubeOfCurrentNumber = i * i * i; // cube of current iterator number

        if(number % squareOfCurrentNumber == 0 && number % cubeOfCurrentNumber != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
