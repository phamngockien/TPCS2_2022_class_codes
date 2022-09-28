#include <iostream>
#include <array> 
#include <vector>


//for C-array sum
int cum_sum(int *arr, unsigned int n)
{
   int i;
   int sum =0;
   for (i = 0; i < n; ++i) sum += arr[i];
   return sum;
}


//for std::array sum
int cum_sum(std::array<int,8> arr)
{
   int sum =0;
   for (auto e : arr) sum += e;
   return sum;
}

//for std::vector
int cum_sum(std::vector<int> vec)
{
   int sum =0;
   for (auto e : vec) sum += e;
   return sum;
}
 
int main()
{
   
   // C-array eg	
   int Carr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   unsigned int n = sizeof(Carr)/sizeof(Carr[0]);
   std::cout<<"cumulative sum of C array: " << cum_sum(Carr, n) << std::endl;
   

   //std::array eg
   std::array<int,8> arr = {1, 2, 3, 4, 5, 6, 7, 8};
   std::cout<<"cumulative sum of std::array: " << cum_sum(arr) << std::endl;

   //std::vector eg
   std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8};
   std::cout<<"cumulative sum of std::vector " << cum_sum(vec) << std::endl;
   
   return 0;
}
