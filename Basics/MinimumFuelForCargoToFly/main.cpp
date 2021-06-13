#include <iostream>

using namespace std;

const int PLANE_FUEL_TANK_CAPACITY = 300;
const int PLANE_WEIGHT_LIFE_CAPACITY = 2000;

int main()
{
    float distanceFromAtoB;
    float distanceFromBtoC;
    float weightOfCargo;
    int FCRPL; // fuel consumption ratio per liter.
    float fuelRequiredFromAtoB;
    float fuelRequiredFromBtoC;
    float minimumFuelRequiredFromBtoC;
    float totalFuelRequiredFromAtoC;

    // Read data into the variables.
    cout << "Enter distance b/w A To B in KM:";
    cin >> distanceFromAtoB;

    cout << "Enter distance b/w B To C in KM:";
    cin >> distanceFromBtoC;

    cout << "Enter cargo weight in KG:";
    cin >> weightOfCargo;

    if (weightOfCargo <= PLANE_WEIGHT_LIFE_CAPACITY) // checking plan can able to carry the weight entered
    {
        // calculating fuel consumption ratio.
        if (weightOfCargo <= 500)
        {
            FCRPL = 1;
        }
        else if (weightOfCargo <= 1000)
        {
            FCRPL = 4;
        }
        else if (weightOfCargo <= 1500)
        {
            FCRPL = 7;
        }
        else if (weightOfCargo <= 2000)
        {
            FCRPL = 9;
        }

        fuelRequiredFromAtoB = FCRPL * distanceFromAtoB;
        fuelRequiredFromBtoC = FCRPL * distanceFromBtoC;
        totalFuelRequiredFromAtoC = fuelRequiredFromAtoB + fuelRequiredFromBtoC;
        minimumFuelRequiredFromBtoC = totalFuelRequiredFromAtoC - fuelRequiredFromBtoC;

        if (minimumFuelRequiredFromBtoC <= PLANE_FUEL_TANK_CAPACITY)
        {
            cout << "Minimum fuel required to refill " << minimumFuelRequiredFromBtoC <<  " to complete the trip" << endl;
        }
        else
        {
            cout << "Can't complete trip, required " << minimumFuelRequiredFromBtoC;
            cout << " ltrs to refill, but plane fuel capacity is " <<  PLANE_FUEL_TANK_CAPACITY << " ltrs." << endl;
        }
    }
    else
    {
        cout << "plane does not lift " << weightOfCargo << " kgs of weight" << endl; // game over more than 2000kg can't lift the plane.
    }
    return 0;
}
