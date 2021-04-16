### inheritance 

- Account
  - balance ,deposite,withdraw,...
- Saving Account
  - balance,deposite,withdraw,interest rate,...
- Checking Account
  - balance,deposite,withdraw,minimum balance per check fee,...
- Trust Account 
  - balance,deposite,withdraw,interest rate,...

### inheritance and composition

- inheritance (is-a relationship)
- composition (has-a account)
- if a person has an account and we derived other classes such as employee,student from person then these classes have also an account because they are derived from person and person has an account.
- class Person {
	private:
	std::string name;//has-a name
	Account account;//has-a account
};
- c++ allows 3 types of inheritance 
  - public (it is provide a is-a relationship)
  - private 
  - protected (both private and protected provide a has-a relationship)

###### constructor and destructor

- Base base;------->Base constructor
- Derived derived;-->Base constructor,Derived constructor
- class destructor invoked reversed order first derived class destructor excecute and then Base class destructor execute
-
-
-  Base base;---->    
   - Base constructor 
   - Base destructor
-  Derived derived;---->
   - Base constructor
   - Derived constructor
   - Derived destructor
   - Base destructor
- A Derived class does Not inherit
  - Base class constructor
  - Base class destructor
  - Base class overloaded assignment operators
  - Base class friend functions
- however,the base class constructor ,destructors,and overloaded assignment operators can invoke the base-class versions

###### Static binding of method calls
- Binding of which method to use is done at compile time
  - Default binding for C++ is static
  - Derived class objects will use Derived::deposit
  - But,we can explicitly invoke Base::deposit from Derived::deposit
  - ok,but limited - much more powerful approach is dynamic binding which we will see in polymorphism

###### Multiple Inheritance 
- A derived class inherits from two or more Base classes at the same time
- The Base classes may belong to unrelated class hierarchies
- A Department Chair
  - Is-A Faculty and 
  - Is-A Administrator

