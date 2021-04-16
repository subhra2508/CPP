// class Account{
// public:
// 	void deposite(double amount){
// 		balance+=amount;
// 	}
// };

// class Saving_Account:public Account{
// public:
// 	void deposite(double amount){
// 		amount+=some_interest;
// 		Account::deposite(amount);
// 	}

// };

//static binding of method calls
#include<bits/stdc++.h>
using namespace std;
class Account{
	friend ostream&operator<<(ostream&os,const Account&account);
protected:
	double balance;
public:
	Account();
	Account(double balance);
	void deposit(double amount);
	void withdraw(double amount);
};

class Saving_Account:public Account{
	friend ostream&operator<<(ostream&os,const Saving_Account&account);
protected:
	double int_rate;
public:
	Saving_Account();
	Saving_Account(double balance,double int_rate);
	void deposit(double amount);
	//withdraw is inherited
};


Account::Account():balance{0}{
	cout<<"no-args constructor"<<endl;
}
Account::Account(double amount):balance{amount}{
	cout<<"Account with amount constructor"<<endl;
}
void Account::deposit(double amount){
	balance+=amount;
	cout<<"deposit method is called"<<endl;
}
void Account::withdraw(double amount){
	if(balance-amount>=0){
		balance-=amount;
	}
	else{
		cout<<"Insuficient funds"<<endl;
	}
}
ostream&operator<<(ostream&os,const Account&account){
	os<<"Account balance"<<account.balance;
	return os;
}

Saving_Account::Saving_Account(double balance,double int_rate):Account(balance),int_rate{int_rate}{

}
Saving_Account::Saving_Account():Saving_Account{0.0,0.0}{

}
void Saving_Account::deposit(double amount){
	amount+=(amount*int_rate/100);
	Account::deposit(amount);
}
ostream&operator<<(ostream&os,const Saving_Account&account){
	os<<"Saving Account balance"<<account.balance<<"Interest rate"<<account.int_rate;
	return os;
}
int main(){
   Account a1{1000};
   cout<<a1<<endl;
   a1.deposit(500);
   cout<<a1<<endl;
   a1.withdraw(1000);
   cout<<a1<<endl;
   Saving_Account s1{1000,5.0};
   cout<<s1<<endl;
   s1.deposit(1000);
   cout<<s1<<endl;
   s1.withdraw(2000);
   cout<<s1<<endl;
}