//one heap object can point to many shared_ptr
//can be assigned and copied
//Doesn't support managing arrays by default
//when the use count is zero,the managed object on the heap is destroyed
//if multiple shared_ptr points to the same heap object how did we know which to delete?
//use a counter ,increment it when another shared_ptr points to the same heap object and
//decrement the pointer when it's deleted(out of scope)

{
	shared_ptr<int>p1{new int{100}};
	cout<<*p1<<endl;
	*p1=200;
	cout<<*p1<<endl;
}//automatically deleted

{
	use_count - the number of shared_ptr objects managing the heap object 
	shared_ptr<int>p1{new int {100}};
	cout<<p1.use_count()<<endl;//1

	shared_ptr<int>p2{p1};
	cout<<p1.use_count()<<endl;//2
	p1.reset();
	cout<<p1.use_count()<<endl;//0
	cout<<p2.use_count()<<endl;//1//look globally
}

shared_ptr - user defined classes

{
	shared_ptr<Account>p1{new Account{"Larry"}};
	cout<<*p1<<endl;//display account
	p1->deposit(1000);
	p1->withdraw(500);
}//automatically deleted

shared_ptr - vector and move

{
	vector<shared_ptr<int>>vec;
	shared_ptr<int>ptr{new int{100}};
	vec.push_back(ptr);//ok - copy is allowed//we can't do this with unique_ptr
	cout<<ptr.use_count()<<endl;//2//the (int) is reference from pointer(ptr) as well as shared_ptr in the vector
}//automatically deleted

{
	shared_ptr<int>p1=make_shared<int>(100);//use count=1//prefered way to declared shared_ptr;
	shared_ptr<int>p2{p1};//use count:2
	shared_ptr<int>p3;
	p3=p1;//use count:3
}//automatically deleted

- use make_shared - it's more efficient!
- all 3 pointers point to the same object on the heap!
- when the use_count becomes 0 the heap object is deallocated