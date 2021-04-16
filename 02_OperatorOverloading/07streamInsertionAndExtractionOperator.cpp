 
stream insertion operator(<<)

std::ostream &operator<<(ostream &os,const Mystring &obj){
	os<<obj.str //if friend function
	//os<<obj.get_str(); // if not friend function
	return os;
}
//return a reference to the ostream so we can keep inserting
//Don't return ostream by value

stream extraction operator(>>)

std::istream &operator>>(istream &is,Mystring &obj){
	char *buff=new char[1000];
	is>>buff;
	obj=Mystring{buff};
	delete [] buff;
	return is;
}

#include<bits/stdc++.h>
using namespace std;
class Mystring{
	friend ostream&operator<<(ostream &os,const Mystring &rhs);
	friend istream&operator>>(istream &in,Mystring &rhs);
}
int main(){
	 Mystring larry{"larry"};
	 Mystring moe{"moe"};
	 Mystring curly;
	 cout<<"Enter the third stooge's first name";
	 cin>>curly;
	 cout<<"the three stooges are"<<larry<<","<<moe<<", and "<<curly<<endl;
	 cour<<"\nEnter the three stooges names separated by a space:";
	 cin>>larry>>moe>>curly;
	 cout<<"the three stooges are"<<larry<<","<<moe<<", and "<<curly<<endl;
	 return 0;
}