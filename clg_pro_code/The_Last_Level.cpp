/*Challenge : "The Last Levels"
Chef is playing a video game, and is getting close to the end. He decides to finish the rest of the game in a single session.

There are X levels remaining in the game, and each level takes Chef
          Y minutes to complete. To protect against eye strain, Chef also decides that every time he completes
          3 levels, he will take a...
          Z minute break from playing. Note that there is no need to take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?*/


#include<iostream>
using namespace std;

int main()
{
    int Games;
    
    cout << "Enter no. of games: ";
    cin >> Games;

    if(Games>0){
   next1 : for(int i = 0 ; i < Games ; i++)
    {
        int Level, LevelTime, BreakTime;
        int TotalTime, Breaks;
          
        cout<<"------------------------------"<<endl;
        cout << "Enter no. of levels for game " << i+1 << ": ";
        cin >> Level;

        cout << "Enter time for each level completion in minutes : ";
        cin >> LevelTime;

        cout << "Enter break time for each 3 levels in minutes: ";
        cin >> BreakTime;
        
        if(Level>0 && LevelTime>0 && BreakTime>=0){
        TotalTime = Level * LevelTime;

        Breaks = (Level - 1) / 3;

        TotalTime += Breaks * BreakTime;

        cout << endl << "Total Time for game: " << TotalTime <<" minutes"<< endl;
        }
        else{
            cout<<"invalid input"<<endl;
            goto next1;
        }
    }
    }

    cout << "24CE089_NILAY PATEL | 24CE092_PRINCE PATEL." << endl;
     return 0;
}