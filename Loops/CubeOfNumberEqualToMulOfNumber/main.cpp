#include <iostream>
/**
The user enters an integer A. The program must determine that the cube of the sum of digits of this number is equal to A *A.
concept:
1. First we will find each digit in the number (e.g 12345, last digit :5) Hint: number % 10;
2. then we will calculate cub of the digit and add to overallCubsum.
3. Step and 1 and 3 will be reapeted for all the digits in the number
4. check multiplication of number * number  == overallCubsum.
*/
using namespace std;

int main()
{
    long number;
    int lastDigit;
    long cubOfDigit;
    long sumOfCubs = 0;
    long mutiplicationOfNumber;

    cout << "Enter Number:";
    cin >> number;

    mutiplicationOfNumber = number * number; // A * A


    while(number)
    {
        lastDigit = number % 10; // finding last digit from number

        cubOfDigit = lastDigit * lastDigit * lastDigit; // finding cube of the digit
        sumOfCubs = sumOfCubs + cubOfDigit; // summing the cubes of all digits

        number = number / 10; // removing last digit from the number
    }
    if (mutiplicationOfNumber == sumOfCubs)
    {
        cout << "Cubs of digits(D1^3+D2^3+....+Dn^3) " << sumOfCubs  << " is EQUAL to multiplication of Number(A*A) " << mutiplicationOfNumber << endl;
    }
    else{
        cout << "Cubs of digits(D1^3+D2^3+....+Dn^3) " << sumOfCubs  << " is NOT EQUAL to multiplication of Number(A*A) " << mutiplicationOfNumber << endl;
    }

    return 0;
}
