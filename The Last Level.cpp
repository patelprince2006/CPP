#include<iostream>
using namespace std;

int main(){
   cout<<"enter a number of games: ";

   int Games;
   cin >> Games; 

  for(int i=0;i<Games;i++)
  {
       int Level, LevelTime,BreakTime;
       int TotalTime,Breaks;
       
       cout<<endl<<"for "<<"game "<<i+1;
       cout<<endl<<"enter levels: ";
       cin >> Level;

       cout <<"enter time for each level compleation: ";
       cin >> LevelTime;

       cout <<"enter break time for each 3 levels(in minites): ";
       cin >>BreakTime;
       
       TotalTime = Level * LevelTime;
   
       Breaks = (Level - 1) / 3;

       TotalTime += Breaks *BreakTime;

       cout <<endl<<"Total Time for game: "<< TotalTime <<" minits"<< endl;
   }

   return 0;
}