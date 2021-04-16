//custom deleters
//sometimes when we destroy a smart pointer we need more than to just destroy the object
//on the heap
//these are special use-cases
//c++ smart pointers allow you to provide custom deleters
//lots of ways to achieve this
//-functions
//-lambdas
//-others...

// Custom deleters - function
// void my_deleter(Some_Class *raw_pointer){
// 	//your custom deleter code
// 	delete raw_pointer;
// }
// shared_ptr<Some_Class>ptr{new Some_Class{},my_deleter};

// void my_deleter(Test *ptr){
// 	cout<<"In my custom deleter"<<endl;
// 	delete ptr;
// }
// shared_ptr<My_Class>ptr{new My_Class{},my_deleter};

// Custom deleters - lambda

// shared_ptr<Test>ptr (new Test{100},[] (Test *ptr){
// 	cout<<"\tUsing my custom deleter"<<endl;
// 	delete ptr;
// });

#include<bits/stdc++.h>
using namespace std;
class Test{
private:
	int data;
public:
	Test():data{0}{cout<<"\tTest constructor {"<<data<<"}"<<endl;}
	Test(int data):data{data}{cout<<"\tTest constructor {"<<data<<"}"<<endl;}
	int get_data()const{return data;}
	~Test(){cout<<"\tTest destructor {"<<data<<"}"<<endl;}
};

void my_deleter(Test *ptr){
	cout<<"\tUsing my custom deleter"<<endl;
	delete ptr;
}
int main(){
	{
		shared_ptr<Test>ptr1{new Test{100},my_deleter};
	}
	cout<<"=================================="<<endl;
	{
		//Using lambda expression
		shared_ptr<Test>ptr2{new Test{1000},[](Test*ptr2){
			cout<<"\tUsing my custom lambda deleter"<<endl;
			delete ptr2;
		}};

	}
	return 0;
}