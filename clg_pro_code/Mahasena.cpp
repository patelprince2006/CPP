/*Challenge : "Mahasena"
Kattapa, as you all know was one of the greatest warriors of his time. The kingdom of Maahishmati had never lost a battle under him (as army-chief), and
the reason for that was their really powerful army, also called as Mahasena.
Kattapa was known to be a very superstitious person. He believed that a soldier is "lucky" if the soldier is holding an even number of weapons, and "unlucky"
otherwise. He considered the army as "READY FOR BATTLE" if the count of "lucky" soldiers is strictly greater than the count of "unlucky" soldiers, and
"NOT READY" otherwise.
Given the number of weapons each soldier is holding, your task is to determine whether the army formed by all these soldiers is "READY FOR BATTLE" or
"NOT READY".*/
#include <iostream>
using namespace std;

int main()
{
    int Soldiers;//Variable for no. of soldiers
    
   next1 : cout << "Enter no. of soldiers: ";
    cin >> Soldiers;
    if(Soldiers>0){
    cout << endl;

    int Weapons;

    int Lucky = 0, Unlucky = 0;//Variables for no. of lucky & unlucky soldiers

    for (int i = 0; i < Soldiers ; ++i)
    {
        cout << "Enter no. of weapons for soldier " << i+1 << ": ";
        cin >> Weapons;
        if (Weapons % 2 == 0)
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
}
 else{
     cout<<"invalid input."<<endl;
     goto next1;
 }
    cout << "24CE089_NILAY PATEL | 24CE092_PRINCE PATEL." << endl;

    return 0;
}