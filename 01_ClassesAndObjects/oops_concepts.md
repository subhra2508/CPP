abstraction
encapsulation
inheritance
polymorphism


### what is abstraction ?
Abstraction means displaying only essential information and hiding the details.
Data abstraction refers to providing only 
essential information about the data to the outside world, hiding the background details or implementation.
example-database system
it hides the details of how data is stored and created and maintained.
a-b //https://www.youtube.com/watch?v=PrnSXjZAWFk (time-8:07)
how is it achieved?
consider a pet store program.you may want to get a dog or a cat.
it would be cumbersome to write code for each pet to be adopted.
instead we can write a generic method that provides the pet using
an interface or an abstract class called animal.so the internal logic
of type of pet is not something pet store owner needs to worry about.
you ask for a dog he calls the same method with a type and give it to you.
without abstraction
string getdog(){return newdog};
string getcat(){return newcat};
with abstraction
string getpet(string type){
	switch(type){
		case "dog":
		return newdog;
		case "cat":
		return newcat;
	}
}



### encapsulation
data hiding is a subset
public,private
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
wrapping relevant data together
Encapsulation is an Object Oriented Programming concept that binds together 
the data and functions that manipulate the data, and that keeps both safe from outside interference and misuse.
Data encapsulation led to the important OOP concept of data hiding
hiding the data for the purpose of protection
writing data & function into single unit

conclusion:
encapsulation is combining related logic data(variables and methods)where as abstraction is hiding internal
implementation details and expose only relevant details to the user.in a way you can abstraction is achieved by 
encapsulation.