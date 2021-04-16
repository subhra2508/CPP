#include<bits/stdc++.h>
using namespace std;
class Player{
public:
	string name; 
	double balance;
	Player(string acc_name="no_name",double acc_balance=0){
		name=acc_name;
		balance=acc_balance;
	}
	void deposite(double bal);
	void withdraw(double bal);
};
palyer::Player():name{"name"},health{0},xp{0}{
	
}
void Player::deposite(double bal){
	balance+=bal;
	cout<<"Total amount after the deposite is "<<balance<<endl;
}
void Player::withdraw(double bal){
	balance-=bal;
	cout<<"The total amount after the withdraw is "<<balance<<endl;
}
int main(){
    Player rakhi("rakhi",0);
    // rakhi.name="rakhi";
    rakhi.balance=0;
    rakhi.deposite(20);
    rakhi.withdraw(10);
    Player *player=new Player("rakhi",100);
    // (*player).name="subhra";
    // (*player).balance=100;
    player->deposite(10);
}