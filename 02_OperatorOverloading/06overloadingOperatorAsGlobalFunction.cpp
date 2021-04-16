// in the unary opeator single object in the parameter list
// in the binary operator two objects in the parameter list

// unary operators as global functions(++,--,-,!)

// ReturnType operatorOp(Type &obj);

// Number operator-(const Number &obj);
// Number operator++(Number &obj);
// Number operator++(Number &obj,int);
// bool operator!(const Number &obj);

// Number n1{100};
// Number n2=-n1;
// n2=++n1;
// n2=n1++;
//

//You can't overload a operator both as memberfunction and nonmember function , you confuse the compiler by this way
//the above sentence says that you can't overload a operator as class method and global function at the same time
Mystring operator-

often declared as friend function in the class declaration

Mystring operator-(const Mystring &obj){//this is a global function
	char *buff=new char[strlen(obj.str)+1];
	strcpy(buff,obj.str);
	for(size_t i=0;i<strlen(buff);i++){
		buff[i]=tolower(buff[i]);
	}
	Mystring temp{buff};
	delete [] buff;
	return temp;
}

// Binary operator as global functions(+,-,==,!=,<,>,etc.)

// ReturnType operatorOp(const &Type lhs,const &Type rhs);

// Number operator+(const &Number lhs,const &Number rhs);
// Number operator-(const &Number lhs,const &Number rhs);
// bool operator==(const &Number lhs,const &Number rhs);
// bool operator<(const &Number lhs,const &Number rhs);

// Number n1{100},n2{200};
// Number n3=n1+n2;
// n3=n1-n2;
// if(n1==n2)...

bool operator==(const Mystring &lhs,const Mystring &rhs){
	if(strcmp(lhs.str,rhs.str)){return true;}
	else return false;
}

Mystring operator+(const Mystring &lhs,const Mystring &rhs){
	size_t buff_size=strlen(lhs.str)+strlen(rhs.str)+1;
	char *buff=new char[buff_size];
	strcpy(buff,lhs.str);
	strcat(buff,rhs.str);
	Mystring temp{buff};
	delete []buff;
	return temp;
}
Mystring operator-(const Mystring &obj){
	buff_size=strlen(obj.str)+1;
	char *buff=new char[buff_size];
	strcpy(buff,obj.str);
	for(size_t i=0;i<strlen(buff);i++)buff[i]=tolower(buff[i]);
	Mystrin temp{buff};
    delete [] buff;
    return temp;
}

------------------------------------------------------------*****--------------------------------------
class Mystring{
	friend bool operator==(const Mystring &lhs,const Mystring &rhs);
	friend Mystring operator-(const Mystring &obj);
	friend Mystring opeator+(const Mystring &lhs,const Mystring &rhs);
}