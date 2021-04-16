// class Base{
// 	Base();
// 	Base(int);
// 	...
// };
// Derived::Derived(int x):Base(x),{optional initializer for Derived class}{

// }

#include<bits/stdc++.h>
using namespace std;
class Base{
private:
	int value;
public:
	Base():value{0}{
		cout<<"No-Args consturctor"<<endl;
	}
	Base(int x):value{x}{
		cout<<"args(int)overloaded constructor"<<endl;
	}
	~Base(){
		cout<<"Base destructor"<<endl;
	}
};
class Derived:public Base{
private:
	int doubled_value;
public:
	Derived():Base(),doubled_value{0}{
		cout<<"No-Args constructor of the Derived class called"<<endl;
	}
	Derived(int x):Base(x),doubled_value{x*2}{
		cout<<"overloaded constructor of the derived class called"<<endl;
	}
	~Derived(){
		cout<<"Derived destructor"<<endl;
	}
};
int main(){
    // Base base;
    // Base base{100};
    // Derived derived;
    Derived derived{100};
}