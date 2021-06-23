/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question: Count a number of integers in the range from 100 to 999 all figures of which are different
*/

/**
@Concept:
Iterate through the loop  from 100 t00 999
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
   int digit1;
   int digit2;
   int digit3;
   int cnt = 0;

   for(int i = 100; i <= 999; i++)
   {
       digit3 = i % 10;
       digit2 = (i/10) % 10;
       digit1 = i / 100;

       if(digit1 != digit2 && digit1 != digit3 && digit2 != digit3)
       {
           cout << digit3 << digit2 << digit1 << " ";
           cnt++;
       }

   }
   cout << endl << "Number of Numbers which are not identical:" << cnt << endl;
    return 0;
}
