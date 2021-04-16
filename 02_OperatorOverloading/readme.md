# you can't overload the following operators
- ::
- :?
- .*
- .
- sizeof

# some basic rules
- precedence and associativity cannot be changed
- 'arity' cannot be changed(i.e can't make the division operator unary)
- can't overload operators for primitive type (e.g int,double,etc.)
- can't create new operators
- [],(),->,and the assignment operator (=) must be declared as member methods
- other operators can be declared as member methods or global function

