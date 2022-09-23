#include <iostream>

/*
   This code contains only the definition of lambda functions
   Because we do not call them anywhere, nothing will happen.
*/

int main()
{
    double x = 1;
    double y = 2;

    //============================================================
    // These part is for unnamed lambda function
    /*
    Syntax:
    [ captures ] ( params ) specs requires(optional) { body }; 
    */
    [](){}; //basic structure 
    []{};  // shortest lambda possible
    
    // functions with only paramters
    [](double x) 
    { 
       std::cout << "Lamb func: [](double x) { return x*x; }; return: " << x*x << "\n";
       return x*x; 
    };
    // This function is equivalent, but it defines the return type
    [](double x) -> double { return x*x; };
    
    // function with only capture
    [x]() { return x*x; };

    // function with both capture and parameter
    // mutable here defines capture variable y can change
    // thus, we pass y by reference 
    [&y](double x) mutable { y = x*x; };
    

     //============================================================
    // These part is for named lambda function
    /*
    Syntax:
    auto name = [ captures ] ( params ) specs requires(optional) { body }; 

    Note: see the return type comments
    */

    //void
    auto a = [](){}; 
    
    //double
    auto b = [](double x) { return x*x; };
    
    //double
    auto c = [](double x) -> double 
                 { return x*x; };
    
    //double
    auto d = [x]() { return x*x; };

    //void, but values of x and y will change
    auto e = [&y](double &x) mutable 
                 { y = ++y; x +=y; };
    

    return 0;
}