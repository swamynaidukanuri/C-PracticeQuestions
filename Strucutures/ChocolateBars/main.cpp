#include <iostream>
using namespace std;

// ChocType, is enum to hold the flavour of the choc
enum ChocType
{
    WHITE,
    DARK,
    MILK
};

struct Chocolate
{
    ChocType type;
    int weight;
    float price;
};

struct ExpChocResult
{
    Chocolate expChocolate;
    int index;
};

void getBars(Chocolate chocolate[], int numOfBars)
{
    int tempType;
    for(int i = 0; i < numOfBars; i++)
    {
        cout << "Enter Type of Choc (0:WHITE,1:DARK,2:MILK):";
        cin >> tempType;
        switch(tempType)
        {
        case WHITE:
            chocolate[i].type = WHITE;
            break;
        case DARK:
            chocolate[i].type = DARK;
            break;
        case MILK:
            chocolate[i].type = MILK;
            break;
        default:
            cout << "Invalid" << endl;
        }
        cout << "Enter Weight:";
        cin >> chocolate[i].weight;
        cout << "Enter Price:";
        cin >> chocolate[i].price;
    }
}

ExpChocResult findExpen(Chocolate chocolate[], int noOfBars)
{
    ExpChocResult expChocResult;
    float expChocRation;

    // for initialization considering first choc as expense once
    expChocResult.expChocolate = chocolate[0];
    expChocResult.index = 0;

    expChocRation = expChocResult.expChocolate.price / expChocResult.expChocolate.weight;  // price / quantity

    for(int i = 0; i < noOfBars; i++) // iterate through entire array.
    {
        if (expChocRation < (chocolate[i].price / chocolate[i].weight)) // finding expense choc
        {
            expChocResult.expChocolate = chocolate[i];
            expChocResult.index = i;
            expChocRation = expChocResult.expChocolate.price / expChocResult.expChocolate.weight;
        }
    }
    return expChocResult;
}
int main()
{
    int numOfBars;

    cout << "Enter Number of Chocolate Bars:";
    cin >> numOfBars;

    Chocolate chocolates[numOfBars]; // Chocolate with number of bars.

    getBars(chocolates, numOfBars);

    ExpChocResult expChocResult = findExpen(chocolates, numOfBars);

    cout << "Expense choc: at index ";
    cout <<expChocResult.index << " "<< expChocResult.expChocolate.price <<" "<< expChocResult.expChocolate.weight;
    switch(expChocResult.expChocolate.type)
    {
    case WHITE:
        cout << " WHITE ";
        break;
    case DARK:
        cout << " DARK ";
        break;
    case MILK:
        cout << " MILK ";
        break;
    }

    return 0;
}
