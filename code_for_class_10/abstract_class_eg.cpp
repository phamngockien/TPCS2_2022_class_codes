#include<iostream>
 
// An abstract class with constructor
class Base
{
protected:
    int x;

public:
    Base(int i) 
    {
        x = i;
        std::cout<<"Constructor of Base called\n";
    }

   
    //abstract function
    virtual void fun() const = 0;


    virtual void print() const = 0;
   
};
 
class Derived: public Base
{
    int y;

public:
    
    //Derived class access to the Base as its own object
    Derived(int i, int j): Base(i) 
    { 
        std::cout<<"Constructor of Derived called\n";
        y = j; 
    }
    
    //This function will overide the abstract function in Base
    //As we define it, the Derived class is not an abstract class
    void fun() const { std::cout << "x = " << x << ", y = " << y<<'\n'; }

    void print() const
    {
      std::cout<<"The print function of Derived class called\n";   
    }
};
 
int main()
{
    Derived d(4, 5);
    d.fun();
   
    //object creation using pointer of base class
    Base *ptr=new Derived(6,7);
    ptr->fun();
    delete ptr;

    //Object of abstract class is not allowed
    //Base *ptr_b = new Base(1);

    
    return 0;
}