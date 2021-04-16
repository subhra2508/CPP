#include<bits/stdc++.h>
using namespace std;
class Test{
private:
	int data;
public:
	Test():data{0}{
		cout<<"Test constructor {"<<data<<"}"<<endl;
	}
	Test(int data):data{data}{
		cout<<"Test constructor {"<<data<<"}"<<endl;
	}
	int get_data()const{return data;}
	~Test(){cout<<"Test Destructor {"<<data<<"}"<<endl;}
};
int main(){
   Test*t1=new Test{1000};
   delete t1;
	unique_ptr<Test>t1{new Test(100)};
	unique_ptr<Test>t2=make_unique<Test>{1000};
	unique_ptr<Test>t3;
	// t3=t1//we are not allowed to assigned unique_ptr
	t3=move(t1);
	if(!t1){
		cout<<"t1 is nullptr"<<endl;
	}


	// IN ACCOUNT CLASS
	// unique_ptr<Account>a1=make_unique<Checking_Account>{"Moe",5000};
	// cout<<*a1<<endl;
	// a1->deposit(5000);
	// cout<<*a1<<endl;
	// vector<unique_ptr<Account>>accounts;
	// accounts.push_back(make_unique<Checking_Account>("James",1000));
	// accounts.push_back(make_unique<Saving_Account>("Billy",4000,5.2));
	// accounts.push_back(make_unique<Trust_Account>("Bobby",1000,4.5));
	// for(const auto &acc:accounts)
	// 	cout<<*acc<<endl;
    return 0;
}