// Derived::Derived(const Derived &other):Base(other),{Derived intializer list}{
// 	//code
// }

// copy constructor
// class Base{
// private:
// 	int value;
// public:
// 	Base(const Base &other):value{other.value}{
// 		cout<<"Base copy constructor"<<endl;
// 	}

// };

// class Derived:public Base{
// 	int doubled_value;
// public:
// 	Derived(const Derived&other):Base(other),doubled_value{other.doubled_value}{
//          cout<<"Derived copy constructor"<<endl;
// 	}

// };

// overloaded copy assignment operator=

// class Derived:public Base{
// 	int doubled_value;
// public:
// 	Derived &operator=(const Derived &rhs){
// 		if(this !=&rhs){
// 			Base::operator=(rhs);
// 			doubled_value=rhs.doubled_value;
// 		}
// 		return *this;
// 	}
// };

#include<bits/stdc++.h>
using namespace std;
class Base{
private:
	int value;
public:
	Base():value{0}{
		cout<<"Base no-args constructor"<<endl;
	}
	Base(int x):value{x}{
		cout<<"int Base constructor"<<endl;
	}
	Base(const Base&other):value{other.value}{
		cout<<"Base copy constructor"<<endl;
	}
	Base &operator=(const Base&rhs){
		cout<<"Base Operator="<<endl;
		if(this==&rhs){
			return *this;
		}
		value=rhs.value;
		return *this; 
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
		cout<<"Derived class no-args constructor"<<endl;
	}
	Derived(int x):Base(x),doubled_value{x*2}{
		cout<<"Derived class int constructor"<<endl;
	}
	Derived(const Derived &other):Base(other),doubled_value{other.doubled_value}{
		cout<<"Derived class copy constructor"<<endl;
	}
	Derived &operator=(const Derived&rhs){
		cout<<"Derived class copy assignment operator"<<endl;
		if(this==&rhs){
			return *this;
		}
		Base::operator=(rhs);
		doubled_value=rhs.doubled_value;
		return *this;
	}
	~Derived(){
		cout<<"Derived class Destructor"<<endl;
	}
}; 
int main(){
     Derived d{100};
     Derived d1{d};
     d=d1;
     return 0;
}


