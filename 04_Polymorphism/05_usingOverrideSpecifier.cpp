//the override specifier
 Base:
    virtual void say_hello()const;
 Derived:
     virtual void say_hello();//i forgot to write the const that cause a unexpected beheviour when we call through pointer 

to fix this problem

Derived:
 virtual void say_hello() override;