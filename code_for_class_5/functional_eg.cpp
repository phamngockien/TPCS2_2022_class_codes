#include <functional>
#include <iostream>

void print_num(int i)
{
    std::cout << i << '\n';
}

int main()
{
    // store a free function that has been defined
    std::function<void(int)> f_display = print_num;
    f_display(-9);

    // store a lambda function
    std::function<void()> f_display_42 = []() { print_num(42); };
    f_display_42();

    //===========================================================================
    //RECURSIVE eg
    auto factorial = [](int n) 
    {
        // store a lambda object to emulate "recursive lambda"; aware of extra overhead
        std::function<int(int)> fac = [&](int n){ return (n < 2) ? 1 : n*fac(n-1); };
        
        // note that "auto fac = [&](int n){...};" does not work in recursive calls
        return fac(n);
    };
    
    for (int i{5}; i != 8; ++i) { std::cout << i << "! = " << factorial(i) << ";  "; }


    return 0;
}