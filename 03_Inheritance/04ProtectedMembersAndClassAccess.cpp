#include<bits/stdc++.h>
using namespace std;
class Base{
	//Note friend of base have access to all
public:
	int a=0;//a={0};
	void display(){cout<<a<<","<<b<<","<<c<<endl;}
protected:
	int b{0};
private:
	int c{0};
};
class Derived:public Base{
	// a will be public
	//b will be protected and accessible
	//c will be private and not accessible
  public:
  void access_base_member(){
  	a=50;
  	b=200;
  	cout<<a<<","<<b<<endl;
  }
};
int main(){
   Base base;
   base.a=100;
   // base.b=200;//give errors
   // base.c=300;//give errors
    base.display();
    Derived db;
    db.access_base_member();
    base.display();

}