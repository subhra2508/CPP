#include<bits/stdc++.h>
using namespace std;
class Player{
private:
	string name;
	int health;
	int xp;
public:
	string get_name(){return name;}
	int get_health(){return health;}
	int get_xp(){return xp;}
	Player(string name_val="none",int health_val=0,int xp_val=0);
	Player(const Player &source);

};
Player::Player(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{

}
Player::Player(const Player &source):name{source.name},health{source.health},xp{source.xp}{
	
}
void display_player(Player p){
	cout<<"name :"<<p.get_name()<<endl;
	cout<<"health :"<<p.get_health()<<endl;
	cout<<"xp :"<<p.get_xp()<<endl;
}
int main(){
	Player rama{"rama",80,80};
	Player new_player(rama);
	display_player(rama);
	display_player(new_player);

}