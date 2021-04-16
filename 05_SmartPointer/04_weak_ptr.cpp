//weak_ptr
//provides a non-owning "weak" reference

//weak_ptr<T>
//Points to an object of type T on the heap
//Does not participate in owning relationship
//always created from a shared_ptr
//Doesn't not increment or decrement reference use count
//used to prevent strong reference cycles which could prevent object from being deleted
//
//circular and cyclic reference
//shared_ptr<B> ----------------> A
// B <---------------- shared_ptr<B>
//if we have two classes A and B their objects point to each other but when they goes out of scope 
//objects are deleted from stack but the shared_ptr in the heap keep alive and this become result to
//memory leak. A keeps B alive and B keeps A alive.
//so what's the solution ?
//solution - make one of the pointers non-owning or 'weak'
//now heap storage is deallocated properly
//shared_ptr<B> --------------------> A
//  B <------------------------------> weak_ptr<A>

#include<bits/stdc++.h>
using namespace std;
class B;//forward declaration
class A{
	shared_ptr<B>b_ptr;
public:
	void set_B(shared_ptr<B>&b){
		b_ptr=b;
	}
	A(){cout<<"A constructor"<<endl;}
	~A(){cout<<"A destructor"<<endl;}
};
class B{
	weak_ptr<A>a_ptr;//make weak to break the strong circular reference
public:
	void set_A(shared_ptr<A>&a){
		a_ptr=a;
	}
	B(){cout<<"B constructor"<<endl;}
	~B(){cout<<"B destructor"<<endl;}
};
int main(){
	shared_ptr<A>a=make_shared<A>();
	shared_ptr<B>b=make_shared<B>();
	a->set_B(b);
	b->set_A(a);
	return 0;
}
