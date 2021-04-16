//virtual function are dynamically bind if they are derived from the base class otherwise they are staticly bind

#include<bits/stdc++.h>
using namespace std;
class Account{
public:
	virtual void withdraw(double amount){
		cout<<"Account::withdraw"<<endl;
	}
};
class Checking:public Account{
public:
	virtual void withdraw(double amount){
		cout<<"Checking::withdraw"<<endl;
	}
};
class Saving:public Account{
	virtual void withdraw(double amount){
		cout<<"Saving::withdraw"<<endl;
	}
};
class Trust:public Account{
	virtual void withdraw(double amount){
		cout<<"Trust:withdraw"<<endl;
	}
};
int main(){
	Account*p1=new Account();
	Account*p2=new Saving();
	Account*p3=new Checking();
	Account*p4=new Trust();
	p1->withdraw(100);
	p2->withdraw(100);
	p3->withdraw(100);
	p4->withdraw(100);
	cout<<"=======clean up======="<<endl;
	delete p1;
	delete p2;
	delete p3;
	delete p4;
}

