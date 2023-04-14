1. What is Class and Object? Class and Object structure
2. Specific Member function
3. Destructor, Function constructor
4. Static Function Definition, Friend Function
5. Overloading, Overwriting definition, Str, Difference
6. Inheritance -> definition details
7. Type of inheritance
8. Abstract class -> need to declare
   Ans: Abstract show only necessary data and hide internal function
   শুধু ইউজার কে প্রয়জনিয় ফাংশন দেখাবে ভিতরে কি কাজ হচ্ছে কিভাবে হচ্ছে তা দেখাবে না ।
   A pure virtual function is a virtual function in C++ for which we need not to write any function definition and only we have to declare it. It is declared by assigning 0 in the declaration.

An abstract class is a class in C++ which have at least one pure virtual function.

Abstract class can have normal functions and variables along with a pure virtual function.

Abstract class cannot be instantiated, but pointers and references of Abstract class type can be created.

Abstract classes are mainly used for Upcasting, so that its derived classes can use its interface.

If an Abstract Class has derived class, they must implement all pure virtual functions, or else they will become Abstract too.

We can’t create object of abstract class as we reserve a slot for a pure virtual function in Vtable, but we don’t put any address, so Vtable will remain incomplete. 9. Pure Virtual function -> Example
#include<iostream>
using namespace std;
class B {
public:
virtual void s() = 0; // Pure Virtual Function
};

class D:public B {
public:
void s() {
cout << "Virtual Function in Derived class\n";
}
};

int main() {
B \*b;
D dobj;
b = &dobj;
b->s();
}
