#include<iostream>

//Template function example
template <typename T> 
T myMax(T x, T y)
{  return (x > y) ? x : y; }

int main()
{
     std::cout << myMax<int>(3, 7) << std::endl; // Call myMax for int
     std::cout << myMax<double>(3.1, 7.2) << std::endl; // Call myMax for double

     return 0;
}