#include <iostream>
#include <memory> //for smart pointers

/*
When to use shared_ptr?
Use shared_ptr if you want to share ownership of a resource. 
Many shared_ptr can point to a single resource. 
Shared_ptr maintains reference count for this propose. 
When all shared_ptr’s pointing to resource goes out of scope the resource is destroyed.

Problem:
 Let’s consider a scenario where we have two classes A and B, both have pointers to other classes. 
 So, it’s always like A is pointing to B and B is pointing to A. 
 Hence, use_count will never reach zero and they never get deleted.
*/
  
class A {
public:
    void show()
    {
        std::cout << "A::show()" << std::endl;
    }
};
  
int main()
{
    //Create a shared pointer that points to an object of type A
    std::shared_ptr<A> p1(new A);
    // returns the memory address of p1
    std::cout << p1.get() << std::endl;
    p1->show();
    
    // pointer p2 is a copy of pointer p1
    std::shared_ptr<A> p2(p1);
    p2->show();
    std::cout << p1.get() << std::endl;
    std::cout << p2.get() << std::endl;
    std::cout << std::endl; 
    
    // Returns the number of shared_ptr objects
    // referring to the same managed object.
    std::cout << p1.use_count() << std::endl;
    std::cout << p2.use_count() << std::endl;
    std::cout << std::endl;
    
    // Relinquishes ownership of p1 on the object
    // and pointer becomes NULL
    p1.reset();
    std::cout << p1.get() << std::endl; //NULL = 0 is printed
    std::cout << p2.use_count() << std::endl;
    std::cout << p2.get() << std::endl;
  
    return 0;
}