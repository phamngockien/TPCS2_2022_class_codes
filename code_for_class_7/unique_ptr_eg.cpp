#include <iostream>
#include <memory>

/*
Use unique_ptr when you want to have single ownership(Exclusive) of the resource. 
Only one unique_ptr can point to one resource. 
Since there can be one unique_ptr for single resource its not possible to copy one unique_ptr to another.
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
    //Create an unique pointer that points to an object of type A
    std::unique_ptr<A> p1(new A);
    p1->show();
  
    // returns the memory address of p1
    std::cout << "p1: " << p1.get() << std::endl;
    std::cout << std::endl;

    // transfers ownership to p2
    std::unique_ptr<A> p2 = std::move(p1); //We will talk about move semantics later
    //std::unique_ptr<A> p2 = p1; cannot copy the unique pointer
    p2->show();
    std::cout << "p1: " << p1.get() << std::endl;
    std::cout << "p2: " << p2.get() << std::endl;
    std::cout << std::endl;

    // transfers ownership to p3
    std::unique_ptr<A> p3 = move(p2);
    p3->show();
    std::cout << "p1: " << p1.get() << std::endl;
    std::cout << "p2: " << p2.get() << std::endl;
    std::cout << "p3: " << p3.get() << std::endl;
  
    return 0;
}