#include <iostream>
#include <array>

int main () {
   
   std::array<int,3> arr = {10, 20, 30};   // definition of std::array.
   std::array<int,3> *arr_ptr = &arr; //definition of a pointer to std::array
   


   /* Compilation Error will return
   // print the address and values of integers stored in arr
   std::cout << "Address and value of the first element: ";
   std::cout << arr << ", " << *arr << std::endl;

   std::cout << "Address and value of the second element: ";
   std::cout << arr+1 << ", " << *(arr+1) << std::endl;

   std::cout << "Address and value of the third element: ";
   std::cout << arr+2 << ", " << *(arr+2) << std::endl;
   */

   std::cout << "Address and value of the first element: ";
   //NOTE: arr_ptr->front() and arr_ptr->at(0) return the same value
   std::cout << &arr_ptr->front() <<", " << arr_ptr->at(0)  << std::endl;

   return 0;
}
