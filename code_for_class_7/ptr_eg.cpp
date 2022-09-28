#include <iostream>

int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable declaration. 

   ip = &var;       // store address of var in pointer variable

   std::cout << "Value of var variable: " << var << std::endl;

   // print the address stored in ip pointer variable
   std::cout << "Address stored in ip variable: " << ip << std::endl;

   // access the value at the address available in pointer
   std::cout << "Value of *ip variable: " << *ip << std::endl;

   return 0;
}
