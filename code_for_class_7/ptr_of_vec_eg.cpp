#include <iostream>
#include <vector>

int main () {
   
   std::vector<int> vec{10, 20, 30};   // definition of a vector.
   std::vector<int> *vec_ptr = &vec; //definition of a pointer to vec
   
   // print the address and values of the first integer stored in vec
   std::cout << "Address and value of the first element: ";
   //NOTE: vec_ptr->front() and vec_ptr->at(0) return the same value
   std::cout << &vec_ptr->front() <<", " << vec_ptr->at(0)  << std::endl;

   // print the address and values of the second integer stored in vec
   std::cout << "Address and value of the second element: ";
   std::cout << &vec_ptr->at(1)  <<", " << vec_ptr->at(1)  << std::endl;
   //std::cout << *vec_ptr[1] << std::endl; // This line has a compilation error.


   return 0;
}
