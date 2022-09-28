
#include <iostream>

int main () {

   //array variable arr actually becomes a pointer
   int  arr[3] = {10, 20, 30};   // definition of an array.

   // print the address and values of integers stored in arr
   std::cout << "Address and value of the first element: ";
   std::cout << arr << ", " << *arr << std::endl;

   std::cout << "Address and value of the second element: ";
   std::cout << arr+1 << ", " << *(arr+1) << std::endl;

   std::cout << "Address and value of the third element: ";
   std::cout << arr+2 << ", " << *(arr+2) << std::endl;

   return 0;
}
