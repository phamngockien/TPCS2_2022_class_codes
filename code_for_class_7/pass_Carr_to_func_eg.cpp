#include <iostream>

// We cannot pass a C array by value
// eg. int sum_arr(int arr){ 

// We have to pass by pointer 
void print_size(int *arr){ 
     	
     std::cout << "size of input pointer to C array: " << sizeof(arr) << std::endl;
     std::cout << "size of first element of C array: " << sizeof(arr[0]) << std::endl;
}


int main () {

   int  arr[3] = {10, 20, 30};   // definition of an array.
   
   std::cout << "size of C array (bytes): " << sizeof(arr) << std::endl;
   std::cout << "size of first element of C array (bytes): " << sizeof(arr[0]) << std::endl;

   print_size(arr);

   return 0;
}
