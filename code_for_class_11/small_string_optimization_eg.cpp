/*
Example for Small String Optimization in C++
Small string will be stored on the stack to optimize the code implementation
Long string will be stored on the heap with a pointer.
*/


#include<iostream>
#include<string>  //for string object
#include<cstdlib> //for malloc

//Overload new operator to track the memory on the free store
void* operator new(std::size_t size)
{
    std::cout << "Allocating " << size << " bytes on the heap (free store)\n";
    return std::malloc(size);
}


int main()
{
    // Test the size of std::string
    size_t size = sizeof(std::string);
    std::cout << "Size of std::string is " << size << " bytes\n";

    // Gradually increasing the size of the string object s
    // to its maximum length
    // You will see after how many characters, the std::string will be stored on the heap
    // On my computer, the string which is less than 16 characters is stored on the stack (local)
    for (size_t i = 0; i < size; ++i)
    {
        std::string s(i,'Y');
        std::cout << i << ": " << s << std::endl;
    }

    
    return 0;
}