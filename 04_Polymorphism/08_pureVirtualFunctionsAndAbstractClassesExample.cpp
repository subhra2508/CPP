#include<bits/stdc++.h>
using namespace std;
class Shape{
private:
	//attributes common to all shapes
public:
	virtual void draw()=0;//pure virtual function
	virtual void rotate()=0;//pure virtual function
	virtual ~Shape(){}
};

class Open_Shape:public Shape{//abstract class
public:
	virtual ~Open_Shape(){}
};

class Closed_Shape:public Shape{//abstract class
public:
	virtual ~Closed_Shape(){}
};

class Line:public Open_Shape{//concrete class
public:
	virtual void draw()override{
		cout<<"Drawing a line"<<endl;
	}
	virtual void rotate() override{
		cout<<"Rotating a line"<<endl;
	}
	virtual ~Line(){}
};
class Circle:public Closed_Shape{
	virtual void draw() override{
		cout<<"Drawing a Circle"<<endl;
	}
	virtual void rotate() override{
		cout<<"Rotating a Circle"<<endl;
	}
	virtual ~Circle(){}
};
class Square:public Closed_Shape{
public:
	virtual void draw() override{
		cout<<"Drawing a Square"<<endl;
	}
	virtual void rotate() override{
		cout<<"Rotating a Square"<<endl;
	}
	virtual ~Square(){}
};
int main(){
     // Shape s;//error you can't intiate abstract classes
	Shape *ptr=new Circle();
	ptr->draw();
	ptr->rotate();
	Shape*s1=new Line();
	Shape*s2=new Circle();
	Shape*s3=new Square();
	vector<Shape*>shapes{s1,s2,s3};
	for(const auto p:shapes)
		p->draw();
}