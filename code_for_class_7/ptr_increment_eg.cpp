#include <iostream>

int main () {
   int  x = 20;   // definition of an integer.
   int  *ptr_x = &x;        // pointer to address of x.

   char c = 'a';   // definition of a character
   char *ptr_c = &c;  // pointer to address of c.

   // print the address stored in ptr_x variable
   std::cout << "Address stored in ptr_x: " << ptr_x << std::endl;
   std::cout << "Address stored in ptr_x+1: " << ++ptr_x << std::endl;

   // print the address stored in ptr_c variable
   std::cout << "Address stored in ptr_c: " << (void *)ptr_c << std::endl;
   std::cout << "Address stored in ptr_c+1: " << (void *)++ptr_c << std::endl;

   return 0;
}
