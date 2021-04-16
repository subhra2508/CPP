// Abstract class
//   - cannot instantiate objects
//   - These classes are used as base classes in inheritance hierarchies
//   - often referred to as Abstract Base classes
// Concrete class 
//   - Used to instantiate objects from 
//   - All their member functions are defined
//        - checking Account
//        - Saving Account
//        - Faculty,Staff
//        - Enemy,Level Boss
 
// pure virtual functions

// Pure virtual functions
//     - used to make a class Abstract
//     - specified with "=0" in its declaration
//      virtual void function()=0//pure virtual function
//     - Typically do not provide implementations
//     - Derived classes must override the base class 
//     - if the derived class do not override then the derived class is also Abstract
//     - used when it doesn't make sense for a base class to have an implementation
//         - But Concrete classes must implement it

//           virtual void draw()=0;//Shape
//           virtual void defend()=0;//Player

class Shape{//abstract class
private:
	//attributes common to all shapes
public:
	virtual void draw()=0;
	virtual void rotate()=0;
	virtual ~shap();
	...
};
class Circle:public Shape{//concreate class
private:
	//attributes for a circle
public:
	virtual void draw() override{
		//code to draw a circle
	}
	virtual void rotate() override{
		//code to rotate a circle
	}
	virtual ~Circle();
	...
};

Abstract Base class 
  - cannot be instantiate
	 - Shape shape;//gives an error
	 - Shape *ptr =new Shape();//gives an error
  - We can use pointers and references to dynamically refer to concrete classes derived from them
    Shape *ptr=new Circle();
    ptr->draw();
    ptr->rotate();