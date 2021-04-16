#include<bits/stdc++.h>
using namespace std;
class Base{
private:
	int value;
public:
	Base():value{0}{cout<<"No-args constructor"<<endl;}
	Base(int x):value{x}{cout<<"Base(int)overloaded constructor"<<endl;}
	~Base(){cout<<"Base destructor"<<endl;}
};
class Derived:public Base{
	using Base::Base; //it inherit all the base constructor in derived class objects//but not initialize the derived part
private:
	int doubled_value;
public:
	Derived():doubled_value{0}{cout<<"Derived No-args constructor"<<endl;}
	Derived(int x):doubled_value{x*2}{cout<<"Derived(int)overloaded constructor"<<endl;}
	~Derived(){cout<<"Derived destructor"<<endl;}
};
int main(){
	// Base b;
    // Base b{100};
    // Derived d;
    Derived d{1000};
}