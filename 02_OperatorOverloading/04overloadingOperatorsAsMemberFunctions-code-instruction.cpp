// unary operators as member methods (++,--,-,!)
// c=a+b for operator a is the lhs this.str and b is rhs.str
ReturnType Type::operatorOp();

Number Number::operator-()const;
Number Number::operator++();        //pre-increment 
Number Number::operator++(int);     //post-increment
bool Number::operator!()const; 
// Number n1{100};
// Number n2=-n1;       //n1.operator-()
// n2=++n1;             //n1.operator()
// n2=n1++;             //n1.operator++(int)


//create a - overloading operator
Mystring Mystring::operator-()const{
	char *buff =new char[strlen(str)+1];
	strcpy(buff,str);
	for(size_t i=0;i<strlen(buff);i++){
		buff[i]=tolower(buff[i]);
		Mystring temp{buff};
		delete []buff;
		return temp;
	}
}

// Binary operator as member methods (+,-,==,!=,<,>,etc.)


// ReturnType Type::operatorOp(const &Type rhs);
Number Number::operator+(const &Number rhs)const;
bool Number::operator-(const &Number rhs);
bool Number::operator==(const &Number rhs);
bool Number::operator<(const &Number rhs);

// Number n1{100},n2{200};
// Number n3=n1+n2;
// n3=n1-n2;
// if(n1==n2) ...

Mystring operator==

bool Mystring::operator==(const Mystring &rhs)const{
	if(strcmp(str,rhs.str)){
		return true;
	}
	else{
		return false;
	}
}

if(s1==s2)...

Mystring operator+(concatenation)

Mystring larry{"Larry"};
Mystring moe{"Moe"};
Mystring stooges{" is one of the three stooges"}

//operator+ is work only if the lefthand side is a same class object
Mystring result=larry+stooges;//larry.opearator+(stooges)
result=moe+"is also a stooge";//moe.operator+("is also a stooge")
result="Moe"+stooges;//"Moe".operator+(stooges)ERROR because the "Moe" is not a Mystring object

Mystring Mystring::operator+(const Mystring&rhs)const{
	size_t buff_size=strlen(str)+strlen(rhs.str)+1;
	char *buff=new char[buff_size];
	strcpy(buff,str);
	strcat(str,rhs.str);
	Mystring temp{buff};
	delete[] buff;
	return temp;
}










