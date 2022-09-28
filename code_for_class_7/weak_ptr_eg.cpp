#include<iostream>
#include<memory>

/*
NOTES:
1. Weak pointer is for non-ownership smart pointer
2. It actually reference to an object which in managed by shared pointer
3. A weak pointer is created as a copy of a shared pointer
4. We have to convert weak pointer to shared pointer in order to use the managed obj
5. It is used to remove cyclic dependency between shared pointers
*/

int main()
{
    //create a shared pointer that points to an int with value of 100
    auto sharedPtr = std::make_shared<int>(100);
    //copy the shared pointer to create a weak pointer
    std::weak_ptr<int> weakPtr(sharedPtr);

    std::cout << "weakPtr.use_count(): " << weakPtr.use_count() << "\n";
    std::cout << "sharedPtr.use_count(): " << sharedPtr.use_count() << "\n";
    //check whether the weak pointer is expired
    std::cout << "weakPtr.expired(): " << weakPtr.expired() << "\n";
    std::cout << "\n";

    // weakPtr.lock()
    // Creates a new std::shared_ptr that shares ownership of the managed object.
    // Here, we convert weak pointer to shared pointer
    if (std::shared_ptr<int> sharedPtr1 = weakPtr.lock())
    {
        std::cout << "*sharedPtr: " << *sharedPtr << "\n";
        std::cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << "\n";
    }
    else {
        std::cout << "Don't get the resource\n";
    }
    std::cout << "\n";

    //Releases the reference to the managed object. After the call *this manages no object. 
    weakPtr.reset();
    //Because weakPtr is reset, the new shared ptr will point to a Null (0)
    // Thus, the statement is false
    if (std::shared_ptr<int> sharedPtr1 = weakPtr.lock())
    {
        std::cout << "*sharedPtr: " << *sharedPtr << "\n";
        std::cout << "sharedPtr1.use_count(): " << sharedPtr1.use_count() << "\n";
    }
    else {
        std::cout << "Don't get the resource\n";
    }

    return 0;
}