#include<iostream>

class Base
{
public:
    virtual void print ()
    { std::cout<< "print base class\n"; }
   
    void show ()
    { std::cout<< "show base class\n"; }

    void f1() { std::cout << "base-f1\n"; }
    virtual void f2() { std::cout << "base-f2\n"; }
    virtual void f3() { std::cout << "base-f3\n"; }
    virtual void f4() { std::cout << "base-f4\n"; }
};
   
class Derived:public Base
{
public:
    //print () is already virtual function in derived class, 
    // we could also declared as virtual void print () explicitly
    virtual void print () 
    { std::cout<< "print derived class\n"; }
   
    void show ()
    { std::cout<< "show derived class\n"; }


    void f1() { std::cout << "derived-1\n"; }
    void f2() { std::cout << "derived-2\n"; }
    void f4(int x) { std::cout << "derived-4\n"; }
};
  
//main function
int main() 
{
    Base *bptr;
    Derived d;
    //This pointer points to the Base type, not Derived type
    //But it points to the address of the d object of Derived type
    bptr = &d;
       
    //virtual function, binded at runtime (Runtime polymorphism - RTP)
    bptr->print(); 
       
    // Non-virtual function, binded at compile time
    bptr->show(); 

    //===============================================================
    // binded at compile time because fun1() is non-virtual in base
    bptr->f1();
  
    // Late binding (RTP)
    bptr->f2();
  
    // Late binding (RTP), call f3 in Base because no f3 function in Derived
    bptr->f3();
  
    // Late binding (RTP), call f4 in Base, because Derived class has f4(int x)
    bptr->f4();
  
    // Early binding but this function call is illegal (produces compiling error)
    // because pointer is of Base type 
    // and function is of Derived class
    //bptr->f4(5);
  
    return 0;
} 