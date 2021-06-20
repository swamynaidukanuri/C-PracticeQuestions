#include <iostream>
using namespace std;
struct Human
{
    string firstName;
    string lastName;
    int number;
};
void printInfo(Human human[])
{
    for(int i = 0; i < 5; i++)
        cout << human[i].firstName << " " << human[i].lastName << " " << human[i].number << endl;
}
int main()
{
    // array to store 5 humans.
    Human human[5];

    // reading data to array
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter firstName:";
        cin >> human[i].firstName;
        cout << "Enter LastName:";
        cin >>human[i].lastName;
        cout << "Enter Number:";
        cin >> human[i].number;
    }

    cout << "\nbefore sort\n";
    printInfo(human);
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if ( human[i].number > human[j].number)
            {
                Human temp = human[i];
                human[i] = human[j];
                human[j] = temp;
            }
        }
    }

    cout << "\nAfter sort\n";
    printInfo(human);

    return 0;
}
