#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
        //❓❓ QUESTION 9, add the constructor here:
Player(string n, int h){
    name = n;
    hitPoints = h;
}
        

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
    //❓❓ QUESTION 9, add to the main function here:
Player a = Player("Nate", 12);
Player b = Player("NateC", 15);
a.damage(11);
b.damage(16);
cout << a.getName() << " has " << a.getHitPoints() << " hit points" << endl;
cout << b.getName() << " has " << b.getHitPoints() << " hit points" << endl;
}
