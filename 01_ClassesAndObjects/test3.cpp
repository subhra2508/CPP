#include<bits/stdc++.h>
using namespace std;
class Player(){
public:
	string name;
	int health;
	int xp;
	Player(string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{

	}
	void xp_add(int val);
	void health_add(int health_val);
	~Player();
}
void Player::xp_add(int val){
	xp+=val;
	cout<<"the xp_add function is called"<<endl;
}
void Player::health_add(int health_val){
	health+=health_val;
	cout<<"the health_val function is called"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

	}
}
// i have faith in myself and i am going to do it i know because its me 