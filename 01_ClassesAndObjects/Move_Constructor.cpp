//introduce in c++11
// total=100+200;
// 300 is stored in the temporary variable by the compilier and it is not addressable so it is a R-value
// Than the L-value is transfered to L-value which is "total".
//move constructor is on r-value difficult topic

#include<bits/stdc++.h>
using namespace std;
class Move{
private:
	int *data;
public:
	void set_data_value(int d){*data=d;}
	int get_data_value(){return *data;}
	//cosntructor
	Move(int d);
	//copy constructor
	Move(const Move &source);
	//Move constructor
	Move(Move &&source)noexcept;
	//destructor
	~Move();
};

Move::Move(int d){
	data=new int;
	*data=d;
	cout<<"Constructor for:"<<d<<endl;
}
//copy constructor
Move::Move(const Move&source):Move{*source.data}{cout<<"copy constructor deep copy for"<<*data<<endl;}

//Move constructor
Move::Move(Move&&source)noexcept:data{source.data}{
source.data=nullptr,cout<<"Move constructor - moving resource"<<*data<<endl;}
 Move::~Move(){
 	if(data!=nullptr){
 		cout<<"Destructor freeing data for "<<*data<<endl;
 	}
 	else{
 		cout<<"Destructor freeing data for nullptr "<<endl;
 	}
 	delete data;
 }

int main(){
	vector<Move>vec;
	vec.push_back(Move{10});
	vec.push_back(Move{20});
	// vec.push_back(Move{30});
	// vec.push_back(Move{40});
	// vec.push_back(Move{50});
	// vec.push_back(Move{60});
	// vec.push_back(Move{70});
	// vec.push_back(Move{80});
	return 0;
}