#include <iostream>

using namespace std;

const int NO_OF_SALES_MANS = 5;

int main()
{
    float sales[NO_OF_SALES_MANS];
    float slaesRevenue = 0.0;

    // reading date to array
    for(int i = 0; i < NO_OF_SALES_MANS; i++)
    {
        cout << "Enter Salesman #" << i + 1 << " revenue: ";
        cin >> sales[i];
    }

    for(int i = 0; i < NO_OF_SALES_MANS; i++)
    {
        // printing *
        for (int j = 0; j < sales[i]/100; j++)
        {
            cout << "*";
        }
        cout <<  endl;
        // calculating sum of sales
        slaesRevenue = slaesRevenue + sales[i];
    }

    cout << "Sum of all " << NO_OF_SALES_MANS << "salesman sales revenue is RM" << slaesRevenue << endl;
    cout << "Average of all " << NO_OF_SALES_MANS << "salesman sales revenue is RM" << slaesRevenue/NO_OF_SALES_MANS << endl;

    return 0;
}
