#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Player 
{
    string name;
    int health,xp;
    public:
       Player(){}
       // Player(string name_val);
          Player(string name_val="NONE",int health_val=0,int xp_val=0);
};

 Player::Player (string name_val,int health_val,int xp_val)
        : name{name_val},health{health_val},xp{xp_val}
 {
     cout<<"Three arg const."<<endl;
 }
 
 int main()
 {
     Player empty;
     Player frank("Frank");
     Player Villian("Villian",100,55);
     Player Hero("Hero",150);
     getch();
     return 0;
 }
 /* Player :: Player ()
    : Player {"NONE",0,0}
    {
        cout<<"NO arg. Constructor."<<endl;
    }
    Player :: Player (string name_val)
    : Player {name_val,0,0}
    {
        cout<<"one arg. const."<<endl;
    }
*/
