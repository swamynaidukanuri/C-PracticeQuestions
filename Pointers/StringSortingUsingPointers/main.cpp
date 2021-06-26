/**
@Author: Swami Kanuri.
@Contact:swamynaidukanuri@gmail.com
@FaceBook:https://www.facebook.com/swamy.kanuri
*/

/**
@Question:
Define a pointer days of the week, and sort the array
Sort the pointers to the strings, not the actual strings.
*/

#include <iostream>
#include <cstring>
using namespace std;

void displayWeekDays(char** ptrToWeekDays, int cnt)
{
    for(int i = 0; i < cnt; i++)
    {
        cout << ptrToWeekDays[i] << " ";
    }
    cout <<  endl;
}

int main()
{
    char* ptrsToWeekDays[] = {"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    cout << "\nBefore Sort\n";
    displayWeekDays(ptrsToWeekDays, 7);

    for(int i = 0; i < 7-1; i++)
    {
        for (int j = i + 1; j < 7; j++)
        {
            if (strcmp(ptrsToWeekDays[i],ptrsToWeekDays[j]) > 0)
            {
               char* tempPtr =  *(ptrsToWeekDays + i);
               *(ptrsToWeekDays + i) = *(ptrsToWeekDays + j);
               *(ptrsToWeekDays + j) = tempPtr;
            }
        }
    }
    cout << "\nAfter Sort\n";
    displayWeekDays(ptrsToWeekDays, 7);
    return 0;
}
