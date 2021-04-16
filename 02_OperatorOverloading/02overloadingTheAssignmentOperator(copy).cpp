

//Type &Type::operator=(const Type &rhs)

// Mystring &Mystring::operator=(const Mystring &rhs);
//s2=s1;
// s2.operator=(s1);

// Mystring &Mystring::operator=(const Mystring&rhs){}



#include<bits/stdc++.h>
using namespace std;
class Mystring{
private: 
	char*str;
public:
	Mystring();
	Mystring(const char *s);
	Mystring(const Mystring &source);
	~Mystring();
	Mystring &operator=(const Mystring &rhs);//overloading assignment operator
	void display()const;
	int get_length()const;
	const char*get_str()const;
};
Mystring::Mystring():str{nullptr}{
	cout<<"constructor call"<<endl;
   str=new char[1];
   *str='\0';
}
Mystring::Mystring(const char *s):str{nullptr}{
	cout<<"overloading constructor call"<<endl;
	  if(s==nullptr){
	  	str=new char[1];
	  	*str='\0';
	  }
	  else{
	  	str=new char[strlen(s)+1];
	  	strcpy(str,s);
	  }
}
Mystring::Mystring(const Mystring&source):str{nullptr}{
	cout<<"copy constructor"<<endl;
	str=new char[strlen(source.str)+1];
	strcpy(str,source.str);
}
Mystring::~Mystring(){
	cout<<"Destructor"<<endl;
	delete []str;
}
Mystring &Mystring::operator=(const Mystring&rhs){
	cout<<"Copy assignment"<<endl;
	if(this==&rhs){
		return *this;
	}
	delete []this->str;
	str=new char[strlen(rhs.str)+1];
	strcpy(this->str,rhs.str);
	return *this;
}


int main(){
	Mystring a{"Hello"};
	Mystring b;
	b=a;
	b="This is a test";
}