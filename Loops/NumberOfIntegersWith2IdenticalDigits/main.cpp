/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
Q:Count a number of integers in the range from 100 to 999 that have two identical figures.
*/

/**
Concept:
Separate each digit from number and compare one with other:
num:123
123%10 - will give you last digit i.e 3
123/10  - will give you num with out last digit .ie 12
(123/10) % 10 - > will give you second digit i.e. 2
123/100 - will give you first digit i.e 1
*/

#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    int digit1;
    int digit2;
    int digit3;
    for(int i = 100; i <= 999; i++)
    {
        digit1 = i % 10;
        digit2 = (i/10) % 10;
        digit3 = i/100;
        if(digit1 == digit2 || digit1 == digit3 || digit2 == digit3)
        {
            cnt++;
            cout << digit3 << digit2 << digit1 <<" ";
        }
    }
    cout << endl << "Total 2 Identical Numbers:" << cnt << endl;
    return 0;
}
