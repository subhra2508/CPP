#include<bits/stdc++.h>
using namespace std;
class Mystring{
private:
	char *str;
public:
	Mystring();//No args constructor
	Mystring(const char *s);//overloaded constructor
	Mystring(const Mystring &source);//copy constructor
	Mystring(const Mystring &&source);//move constructor
	~Mystring();//destructor
	Mystring &operator=(const Mystring&rhs);//copy assignment operator
	Mystring &operator=(const Mystring&&rhs);//move assignment operator
	Mystring operator-()const;//uninary operator doesnot take any parameter but binary takes
	Mystring operator+(const Mystring &rhs)const;
	bool operator==(const Mystring &rhs)const;
	void display()const;
	int get_length()const;
	const char*get_str()const;
}

Mystring::Mystring()str{nullptr}{
	str=new char[1];
	*str='/0';
}
Mystring::Mystring(const char *s):str{nullptr}{
	if(s==nullptr){
		str=new char[1];
		*str='/0';
	}
	else{
		str=new char[strlen(s)+1];
		strcpy(str,s);
	}
}
Mystring::Mystring(const Mystring&source):str{nullptr}{
      str=new char[strlen(source.str)+1];
      strcpy(str,source.str); 
}
Mystring::Mystring(const Mystring&&rhs):str{source.str}{
	source.str=nullptr;
}

Mystrin::~Mystring(){
	delete str[];
}

Mystring &Mystring::operator=(const Mystring&rhs){//we are returning the value by reference 
  if(this==&rhs){
     return *this; 
  }
  else{
  	delete [] this->str;
  	str=new char[strlen(rhs.str)+1];
  	strcpy(this->str,rhs.str);
  	return *this;
  }
}
Mystring &Mystring::operator=(const Mystring&&rhs){
	if(this==&rhs){
		return *this;
	}
	else{
		delete [] str;
		str=rhs.str;
		rhs.str=nullptr;
		return *this;
	}
}
bool Mystring::operator==(const Mystring&rhs)const{
	if(strcmp(str,rhs.str)){
		return true;
	}
	else{
		return false;
	}
}
Mystring Mystring::operator+(const Mystring&rhs)const{
	buff_size=strlen(str)+strlen(rhs.str)+1;
	char *buff=new char[buff_size];
	strcpy(buff,str);
	strcat(str,rhs.str);
	Mystring temp{buff};
	delete []buff;
	return temp;
}
Mystring Mystring::operator-()const{//we are returning mystring object by value
	char *buff=new char[strlen(str)+1];
	strcpy(buff,str);
	for(int i=0;i<strlen(str)+1;i++){
		buff[i]=tolower(buff[i]);
	}
	Mystring temp{buff};
	delete[]buff;
	return temp;

}




int main(){

}