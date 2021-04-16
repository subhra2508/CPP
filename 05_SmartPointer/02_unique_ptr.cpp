//simple smart pointer - very efficient!
//unique_ptr<T>
//points to an object of type T on the heap
//it is unique - there can only be one unique_ptr<T> pointing to the object on the heap
//owns what it points to
//cannot be assigned or copied
//can be moved
//when the pointer is destroyed,what it points to is automatically destroyed


//unique_ptr - creating,initializing and using
// {
// 	std::unique_ptr<int>p1{new int{100}};
// 	cout<<*p1<<endl;
// 	*p1=200;
// 	cout<<*p1<<endl;
// }//automatically deleted

{
	unique_ptr<int>p1{new int{100}};
	cout<<p1.get()<<endl;
	p1.reset();//p1 is now nullptr
	if(p1)cout<<*p1<<endl;//won't execute
}

{
	unique_ptr<Account>p1{new Account{"Larry"}};
	cout<<*p1<<endl;//display account
	p1->deposit(1000);
    p1->withdraw(500);
}

unique_ptr - vectors and move
{
	vector<unique_ptr<int>>vec;
	unique_ptr<int>ptr{new int{100}};
	vec.push_back(ptr);//Error - copy not allowed
	vec.push_back(move(ptr));
}//automatically deleted

unique_ptr - make_unique(c++14)

{
	unique_ptr<int>p1=make_unique<int>(100);
	unique_ptr<Account>p2=make_unique<Account>("curly",5000);
	auto p3=make_unique<Player>("Hero",100,100);//make_unique return a unique_ptr
}//automatically deleted


