/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question:
Write a program that reads a group of numbers from the user and places them in an array
of type float. Once the numbers are stored in the array, the program should average
them and print the result. Use pointer notation wherever possible.
*/


#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float arr[100];
    int i = 0;
    int integersEntered = 0;
    char choice;
    int sumOfallEntries = 0;
    // read input to array
    do
    {
        cout << "Enter Number:";
        cin >> *(arr+i);
        i++;
        integersEntered++;
        cout << "Do you want to continue?(y/n):";
        cin >>choice;
    }while(choice!='n');

    // calculate sum of integers
    for(int i = 0; i < integersEntered; i++)
    {
        sumOfallEntries += *(arr + i);
    }

    system("CLS");

    cout << "\nAvg of all numbers:" << sumOfallEntries / integersEntered  << endl;
    return 0;
}
