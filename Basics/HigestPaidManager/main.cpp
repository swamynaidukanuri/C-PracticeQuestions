#include <iostream>

using namespace std;

const int BASIC_SALARY = 200;
const int BONUS_SALARY = 200;
int main()
{
    // All managers having basic salary as 200.
    float manager1_salary = BASIC_SALARY;
    float manager2_salary = BASIC_SALARY;
    float manager3_salary = BASIC_SALARY;

    float manager1_sales;
    float manager2_sales;
    float manager3_sales;

    cout << "Enter Manager1 Sales:";
    cin >> manager1_sales;

    cout << "Enter Manager2 Sales:";
    cin >> manager2_sales;

    cout << "Enter Manager3 Sales:";
    cin >> manager3_sales;


    // finding out manager 1 total salary with respect to sales.
    if(manager1_sales < 500)
    {
        manager1_salary = manager1_salary + manager1_sales * 0.03;
    }
    else if (manager1_sales >= 500 && manager1_sales < 1000)
    {
        manager1_salary = manager1_salary + manager1_sales * 0.05;
    }
    else if (manager1_sales >=1000)
    {
        manager1_salary = manager1_salary + manager1_sales * 0.1;
    }

    // finding out manager 2 total salary with respect to sales.
    if(manager2_sales < 500)
    {
        manager2_salary = manager2_salary + manager2_sales * 0.03;
    }
    else if (manager2_sales >= 500 && manager2_sales < 1000)
    {
        manager2_salary = manager2_salary + manager2_sales * 0.05;
    }
    else if (manager2_sales >=1000)
    {
        manager2_salary = manager2_salary + manager2_sales * 0.1;
    }

    // finding out manager 3 total salary with respect to sales.
    if(manager3_sales < 500)
    {
        manager3_salary = manager3_salary + manager3_sales * 0.03;
    }
    else if (manager3_sales >= 500 && manager3_sales < 1000)
    {
        manager3_salary = manager3_salary + manager3_sales * 0.05;
    }
    else if (manager3_sales >=1000)
    {
        manager3_salary = manager3_salary + manager3_sales * 0.1;
    }

    // Find best Manager and give bonus

    if(manager1_salary > manager2_salary && manager1_salary > manager3_salary)
    {
        cout << "\nManager 1 is best" << endl;
        manager1_salary = manager1_salary + BONUS_SALARY;
    }
    else if (manager2_salary > manager1_salary && manager2_salary > manager3_salary)
    {
        cout << "\nManager 2 is best" << endl;
        manager2_salary = manager2_salary + BONUS_SALARY;
    }
    else if (manager3_salary > manager1_salary && manager3_salary > manager2_salary)
    {
        cout << "\nManager 3 is best" << endl;
        manager3_salary = manager3_salary + BONUS_SALARY;
    }
    else
    {
        cout << "\nAll are equal" << endl;
    }

    // print the 3 manager salaried after rewards.
    cout << "\n***********SALARIES***********\n";
    cout << "Manager 1 Salary:" << manager1_salary << endl;
    cout << "Manager 2 Salary:" << manager2_salary << endl;
    cout << "Manager 3 Salary:" << manager3_salary << endl;

    return 0;
}
