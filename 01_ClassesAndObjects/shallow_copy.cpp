#include<bits/stdc++.h>
using namespace std;
class Shallow{
private:
	int *data;
public:
	void set_data_value(int d){*data=d;}
	int get_data_value(){return *data;}
	Shallow(int d);
	Shallow(const Shallow &source);
	~Shallow();
};



Shallow::Shallow(int d){
	data=new int;
	*data=d;
}
//Shallow copy
Shallow::Shallow(const Shallow &source):data{source.data}{
	cout<<"copy-constructor shallow-copy"<<endl;
}


// In the shallow copy we copy the address of the obj but in the deep copy we pass the value so after
// the destructor called in shallow copy desplay_shallow the address is deleted so it gives problem.



//Deep copy
// Deep::Deep(const Deep &source):data{*source.data}{
// 	cout<<"Copy constructor - deep"<<endl;
// }
//or
// Deep::Deep(const Deep &source){
// 	data=new int ;
// 	*data=*source.data;
// 	cout<<"copy constructor - deep"<<endl;
// }



//move constructor
//r-value is the temporary variable created by compiler
//l-value that has address and addressable




Shallow::~Shallow(){
	delete data;
	cout<<"distructure freeing data"<<endl;
}
void display_shallow(Shallow s){
	cout<<s.get_data_value()<<endl;
}//destructor come

// void display_deep(Deep s){
// 	cout<<s.get_data_value()<<endl;
// }



int main(){
    Shallow obj1{100};//crash the program
    display_shallow(obj1);
    Shallow obj2{obj1};
    obj2.set_data_value(1000);
    cout<<"obj1 and obj2 values are :"<<obj1.get_data_value()<<" "<<obj2.get_data_value()<<endl;
    return 0;
}