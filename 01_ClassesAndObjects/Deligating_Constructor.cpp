#include<bits/stdc++.h>
using namespace std;
class Player{
	string name;
	int health;
	int xp;
	 public:
	 	
	 	Player(string name_val="unknown",int health_val=0,int xp_val=0);
	 	Player(const Player &source);
	 	void info();
	 	~Player();
};
// Player::Player():name{"unknown"},health{0},xp{0}{}
// Player::Player(string name_val):name{name_val},health{0},xp{0}{

// }
// Player::Player(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{

// }
//
//Deligating constructor
Player::Player(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{}
Player::Player(string name_val):Player{name_val,0,0}{}
Player::Player(string name_val,int health,):Player{name_val,health_val,0}{}
//copy constructor
Player::Player(const Player &source):name{source.name},health{source.health},xp{source.xp}{
	
}
int main(){
	 
}