#include<bits/stdc++.h>
using namespace std;
class Deep{
private:
	int *data;
public:
	void set_data_value(int d){d=*data;}
	int get_data_value(){return *data;}
	Deep(int d);
	Deep(const Deep &source);
	~Deep();
};
Deep::Deep(int d){
	data=new int;
	*data=d;
}
Deep::Deep(const Deep &source):Deep{*source.data}{
	cout<<"Copy constructor - deep copy"<<endl;
}
Deep::~Deep(){
	delete data;
	cout<<"Destructor freeing data"<<endl;
}
void display_deep(Deep s){
	cout<<s.get_data_value()<<endl;
}
int main(){
	Deep obj1{100};
	display_deep(obj1);
	Deep obj2{obj1};
	obj2.set_data_value(1000);
	cout<<"obj1-data :"<<obj1.get_data_value()<<endl;
	cout<<"obj2-data :"<<obj2.get_data_value()<<endl;
	return 0;

}