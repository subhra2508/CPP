// Type &Type::operator=(Type &&rhs);

// Mystring &Mystring::operator=(Mystring &&rhs){
// 	if(this==&rhs){
// 		return *this;
// 	}
// 	delete []str;
// 	str=rhs.str;
// 	rhs.str=nullptr;
// 	return *this;
// }
#include<bits/stdc++.h>
using namespace std;
class Mystring{
private:
	char *str;
public:
	Mystring();
	Mystring(const char*s);
	Mystring(const Mystring&source);//copy constructor
	Mystring(Mystring &&source);//move constructor
	~Mystring();//Destructor
	Mystring &operator=(const Mystring &rhs);//copy assignment
    Mystring &operator=(Mystring &&rhs);//move assignment



	void display()const;
	int get_length()const;          //getters
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

//Move constructor
Mystring::Mystring(Mystring &&source):str(source.str){
	//taking the source object 
	source.str=nullptr;
	cout<<"Move constructor used"<<endl;
}

Mystring::~Mystring(){
	cout<<"Destructor"<<endl;
	delete []str;
}


//Copy assignment
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
//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
	cout<<"Using move assignment"<<endl;
	if(this==&rhs){
		return *this;
	}
	delete []str;
	str=rhs.str;
	rhs.str=nullptr;
	return *this;
}







int main(){
	Mystring a{"Hello"};
	a=Mystring{"Halo"};
	a="Bonjour";
}