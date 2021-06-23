/**
Q: The user enters any integer. From this integer you should remove numbers 3 and 6 and output back to the screen
Concept:
1. we will find last digit of a number (e.g:1234567, last digit:7) {hint: number%10}
2. we will check digit is not 3 or 6, and reverse the number (out:75421)
3. again we will reverse the step 2 output (75421 -> 12457), so our final out put not contained 3 or 6.
*/
#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    long number;
    long reverseNumber = 0;
    int lastDigit;

    cout << "Enter Number:";
    cin >> number;

    /*** Removing 3 and 6 and and Reversing the Number
    e.g: 1234567 -> 75421
    */
    while(number)
    {
        lastDigit = number % 10; // Finding last digit

        if(lastDigit != 3 && lastDigit != 6)
        {
            reverseNumber = reverseNumber * 10 + lastDigit; // reversing the number
        }

        number = number / 10; // leaving the last digit
    }
    int newNumber = 0;
    /*** reverese the Number
    e.g: 75421 -> 12457
    */
    while(reverseNumber)
    {
        lastDigit = reverseNumber % 10; // Finding last digit
        newNumber = newNumber * 10 + lastDigit; // reversing the number
        reverseNumber = reverseNumber / 10; // leaving the last digit
    }

    cout << "New Number:" << newNumber << endl;
    return 0;
}
