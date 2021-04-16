the final specifier
- c++11 provides the final specifier
  - when used at the class level
     - prevents a class from being derived from
  - when used at the method level
     - prevents virtual method from being overriden in derived classes


class A{
public:
	virtual void do_something();
};
class B:public A{
public:
	virtual void do_something() final;//prevent further overriding
};
class C:public B{
	virtual void do_something();
};