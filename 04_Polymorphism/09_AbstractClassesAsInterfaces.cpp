//what is using a class as an interface?
//An abstract class that has only pure virtual functions
//These functions provide a general set of services to the user of the class
//provided as public
//Each subclass is free to implement these services as needed
//Every service (method) must be implemented
//These service type information is strictly enforced


//c++ does not provide true interfaces
//we use abstract classes and pure virtual functions to achieve it
//suppose we want to be able to provide printable support for any object
//we wish without knowing it's implementation at compile time
//cout<<any_object<<endl;
//any_object must confirm to the Printable interface

class Printable{
	friend ostream &operator<<(ostream&,const Printable &obj);
public:
	virtual void print(ostream &os) const=0;
	virtual ~Printable(){}
	...
};

class Any_Class:public Printable{
public:
	//must override Printable:print()
	virtual void print(ostream *os)override{
		os<<"Hi from Any_Class";
	}
	...
};

ostream&operator<<(ostream&os,const Printable &obj){
	obj.print(os);
	return os;
}

Any_Class *ptr=new Any_Class();
cout<<*ptr<<endl;
void function1(Any_Class &obj){
	cout<<obj<<endl;
}
void function2(Printable &obj){
	cout<<obj<<endl;
}
function1(*ptr);//"Hi from Any_Class"
function2(*ptr);//"Hi from Any_Class"