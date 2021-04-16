// #include<bits/stdc++.h>
// using namespace std;
// class Account{
// 	friend ostream&operator<<(ostream&os,const Account &obj);
// public:
// 	virtual void withdraw(double amount){
// 		cout<<"In Account:withdraw"<<endl; 
// 	}
// 	virtual ~Account(){}
// };
// ostream&operator<<(ostream&os,const Account&acc){
// 	os<<"Account display";
// 	return os;
// }
// class Checking: public Account {
// 	friend ostream&operator<<(ostream&os,const Checking &acc);
// public:
// 	virtual void withdraw(double amount){
// 		cout<<"In Checking::withdraw"<<endl;
// 	}
// 	virtual ~Checking(){}
// };
// ostream &operator<<(ostream&os,const Checking &acc){
// 	os<<"Checking display";
// 	return os;
// }
// class Saving:public Account{
// 	friend ostream&operator<<(ostream&os,const Saving &acc);
// public:
// 	virtual void withdraw(double amount){
// 		cout<<"In Saving::withdraw"<<endl;
// 	}
// 	virtual ~Saving(){}
// };
// ostream&operator<<(ostream&os,const Saving&acc){
// 	os<<"Saving display";
// 	return os;
// }
// class Trust:public Account{
// 	friend ostream&operator<<(ostream&os,const Trust &acc);
// public:
// 	virtual void withdraw(double amount){
// 		cout<<"In Saving::withdraw"<<endl;
// 	}
// 	virtual ~Trust(){}
// };
// ostream&operator<<(ostream&os,const Trust&acc){
// 	os<<"Trust display";
// 	return os;
// }
// int main(){
// 	// Account a;
// 	// cout<<a<<endl;
// 	// Checking c;
// 	// cout<<c<<endl;
// 	// Saving s;
// 	// cout<<s<<endl;
// 	// Trust t;
// 	// cout<<t<<endl;
// 	Account *p1=new Account();
// 	cout<<*p1<<endl;//display account
// 	Account *p2=new Checking();
// 	cout<<*p2<<endl;//it also display account that's the problem //so use a interfaces class printable so 

// 	return 0;
// }

// -------------------------------use interface class printable and clean the previous code------------

#include<bits/stdc++.h>
using namespace std;
class I_Printable{
	friend ostream&operator<<(ostream&os,const I_Printable &obj);
public:
	virtual void print(ostream &os)const =0;
};
ostream&operator<<(ostream&os,const I_Printable&obj){
	obj.print(os);
	return os;
}

class Account:public I_Printable{	 
public:
	virtual void withdraw(double amount){
		cout<<"In Account:withdraw"<<endl; 
	}
	virtual void print(ostream&os)const override{
		os<<"Account display";
	}
	virtual ~Account(){}
};
 
class Checking: public Account {
	 
public:
	virtual void withdraw(double amount){
		cout<<"In Checking::withdraw"<<endl;
	}
	virtual void print(ostream&os)const override{
		os<<"Checking display";
	}
	virtual ~Checking(){}
};
 
class Saving:public Account{
	 
public:
	virtual void withdraw(double amount){
		cout<<"In Saving::withdraw"<<endl;
	}
	virtual void print(ostream&os)const override{
		os<<"Saving display";
	}
	virtual ~Saving(){}
};
 
class Trust:public Account{
	 
public:
	virtual void withdraw(double amount){
		cout<<"In Saving::withdraw"<<endl;
	}
	virtual void print(ostream&os)const override{
		os<<"Trust display";
	}
	virtual ~Trust(){}
};

class Dog:public I_Printable{
	public:
		virtual void print(ostream&os)const override{
			os<<"Woof woof";
		}
};

void print(const I_Printable&obj){
	cout<<obj<<endl;
}
 
int main(){
	// Account a;
	// cout<<a<<endl;
	// Checking c;
	// cout<<c<<endl;
	// Saving s;
	// cout<<s<<endl;
	// Trust t;
	// cout<<t<<endl;
	Account *p1=new Account();
	cout<<*p1<<endl; 
	Account *p2=new Checking();
	cout<<*p2<<endl; 
	Dog *dog=new Dog();
	cout<<*dog<<endl;
	print(*dog);

	return 0;
}