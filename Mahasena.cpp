#include <iostream>
using namespace std;

int main()
{
    int Soldiers;//Variable for no. of soldiers

    cout << "Enter no. of soldiers: ";
    cin >> Soldiers;

    cout << endl;

    int Weapons;//Variable for no. of weapons that soldiers have

    int Lucky = 0, Unlucky = 0;//Variables for no. of lucky & unlucky soldiers

    for (int i = 0; i < Soldiers ; ++i)//Loop for entering no. of weapons for soldiers & for counting no. of lucky & unlucky soldiers
    {
        cout << "Enter no. of weapons for soldier " << i+1 << ": ";
        cin >> Weapons;

        if (Weapons % 2 == 0)//If no. of weapons is even...
        {
            Lucky++;
        }

        else
        {
            Unlucky++;
        }
    }

    cout << endl;

    if (Lucky > Unlucky)
    {
        cout << "ARMY IS READY FOR BATTLE." << endl;
    }

    else
    {
        cout << "ARMY IS NOT READY FOR BATTLE." << endl;
    }

    cout << "24CE089_NILAY PATEL | 24CE092_PRINCE PATEL." << endl;

    return 0;
}