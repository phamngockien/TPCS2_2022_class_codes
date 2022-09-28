#ifndef TEST_EXAMPLE_H
#define TEST_EXAMPLE_H

#include "example.h"
#include<iostream>

bool run_all_test(){

   //a variable that control if all tests are passed
   bool all_passed = true;

   
   //THIS PART IS FOR TEST 1:
   //initialize input vectors
   std::vector<double> x {3};
   std::vector<double> y {4};
  

   //test: sum square of 3 and 4, answer is 25
   if (sum_squares(x,y) != 25.){
   
	   all_passed = false;
           std::cout<<"sum_squares func test is failed \n";
   } else {
   
	   std::cout<<"sum_squares func test is passed \n";
   }

   //Here is the test for other functions
   //......
   //


   //Finally, print if all test are passed or not
   (all_passed) ? std::cout<<"all tests are passed \n" : std::cout<<"there is a failure in our tests! \n";

   return all_passed;
}




#endif
