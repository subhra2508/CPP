#include<bits/stdc++.h>
using namespace std;
class Account{
	friend ostream&operator<<(ostream&os,const Account&account);
private:
	static constexpr const char *def_name="Unnamed Account";
	static constexpr double def_balance=0.0;
protected:
	string name;
	double balance;
public:
	Account(string name=def_name,double balance=def_balance);
	//Account(string name="Unnamed Account",double balance=0.0);
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_balance()const;
};

//------------------------------------Saving Account :Derived From Account Class----------------------------------
class Saving_Account:public Account{
	friend ostream&operator<<(ostream&os,const Saving_Account &account);
private:
	static constexpr const char *def_name="Unnamed";
	static constexpr double def_balance=0.0;
	static constexpr double def_int_rate=0.0;
protected:
	double int_rate;
public:
	Saving_Account(string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
	bool deposit(double amount);
	//inherits the Account::withdraw methods
};


//------------------------------------Account Class---------------------------------------------------

// Account::Account():name{"Unnamed"},balance{0.0}{

// }
Account::Account(string name,double balance):name{name},balance{balance}{

}
bool Account::deposit(double amount){
	if(amount<0){
		return false;
	}
	else{
		balance+=amount;
		return true;
	}
}
bool Account::withdraw(double amount){
	if(balance-amount>=0){
		balance-=amount;
		return true;
	}
	else{
		return false;
	}
}
double Account::get_balance()const{
	return balance;
}
ostream&operator<<(ostream&os,const Account&account){
	os<<"Account:"<<account.name<<":"<<account.balance;
	return os;
}

//------------------------------Derived class---------------------------------------

Saving_Account::Saving_Account(string name,double amount,double int_rate):Account(name,balance),int_rate{int_rate}{

}
bool Saving_Account::deposit(double amount){
	amount+=amount*(amount*int_rate/100);
	return Account::deposit(amount);
}
ostream&operator<<(ostream&os,const Saving_Account&account){
	os<<"[Saving_Account:"<<account.name<<":"<<account.balance<<","<<account.int_rate<<"%]";
	return os;
}

//-------------------------------Utility helper function for Account class----------------------------

void display(const vector<Account>&accounts);
void deposit(vector<Account>&accounts,double amount);
void withdraw(vector<Account>&accounts,double amount);

//-------------------------------Utility helper function for Saving_Account class----------------------

void display(const vector<Saving_Account>&accounts);
void deposit(vector<Saving_Account>&accounts,double amount);
void withdraw(vector<Saving_Account>&accounts,double amount);
//------------------------------------------------------------------------------------------------------

void display(const vector<Account>&accounts){
	for(const auto &acc:accounts){
		cout<<acc<<endl;
	}
}
void deposit(vector<Account>&account,double amount){
	for(auto &acc:account){
		if(acc.deposit(amount)){
			cout<<amount<<acc<<endl;
		}
		else{
			cout<<amount<<acc<<endl;
		}
	}
}
void withdraw(vector<Account>&account,double amount){
	for(auto &acc:account){
		if(acc.withdraw(amount)){
			cout<<amount<<acc<<endl;
		}
		else{
			cout<<amount<<acc<<endl;
		}
	}
}
int main(){
	// cout<<precision(2);//i don't know why we use it
	// cout<<fixed;//i don't know

	vector<Account>accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"Larry"});
	accounts.push_back(Account{"Moe",2000});
	accounts.push_back(Account{"Curly",5000});

	display(accounts);
	deposit(accounts,1000);
	withdraw(accounts,2000);

	//Saving 
	// vector<Saving_Account>sav_accounts;
	// sav_accounts.push_back(Saving_Account{});
	// sav_accounts.push_back(Saving_Account{"Superman"});
	// sav_accounts.push_back(Saving_Account{"Batman",2000});
	// sav_accounts.push_back(Saving_Account{"Wonderwoman",5000,5.0});

	// display(sav_accounts);
	// deposit(sav_accounts,1000);
	// withdraw(sav_accounts,2000);

	return 0;

}