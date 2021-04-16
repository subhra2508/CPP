// class Base{
// 	//Base class members...
// }

// class Derived:access-specifier Base{
// 	//Derived class members...
// }

#include<bits/stdc++.h>
using namespace std;
class Account{
public:
	double balance;
	string name;
	void deposite(double amount);
	void withdraw(double amount);
	Account();
	~Account();
};
class Saving_Account:public Account{
     public:
     	double int_rate;

     	Saving_Account();
     	~Saving_Account();
     	void deposite(double amount);
     	void withdraw(double amount);
};



Saving_Account::Saving_Account():int_rate{3.0}{}
Saving_Account::~Saving_Account(){}
void Saving_Account::deposite(double amount){
	cout<<"Saving_Account deposite called with"<<amount<<endl;
}
void Saving_Account::withdraw(double amount){
	cout<<"Saving_Account withdraw called with"<<amount<<endl;
}




Account::Account():balance{0.0},name{"account"}{}
Account::~Account(){}
void Account::deposite(double amount){
	cout<<"Account deposite called with"<<amount<<endl;
}
void Account::withdraw(double amount){
	cout<<"Account withdraw called with"<<amount<<endl;
}
int main(){
     Account acc{};
     acc.deposite(500);
     acc.withdraw(50);

     Account *p_acc{nullptr};
     p_acc=new Account;
     p_acc->deposite(200);
     p_acc->withdraw(20);
     delete p_acc;
     //using saving account
     Saving_Account sav_acc;
     sav_acc.deposite(2000);
     sav_acc.withdraw(75);

}
