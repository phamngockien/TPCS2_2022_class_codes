#include<iostream>
int main()
{   
    // simple rvalue example
    int n = 1 > 2 ? 10 : 11;  // 1 > 2 is false, so n = 11

    // simple lvalue example
    int m = 10; 
    (n == m ? n : m) = 7; // n == m is false, so m = 7

    //output the result
    std::cout << "n = " << n << "\nm = " << m <<"\n";
    return 0;
}
