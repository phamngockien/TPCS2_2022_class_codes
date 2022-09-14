/*
Some examples for basic operators
You can use 
std::cout << x << std::endl; 
after each line of code below to see the result.
*/

#include<iostream>

int main()
{
    int x; //declare an integer variable

    x = 5; //value assignment

    x += 2; //x = x + 2

    x -= 2; //x = x - 2

    x *= 5; //x = x * 5

    x /= 5; //x = x / 5

    x %= 2; //x = x % 2 (% modulus operator)

    std::cout << "x: " << x << std::endl; //print current value of x
    ++x; //x = x + 1 (prefix)
    std::cout << "++x: " << x << std::endl; //print current value of x
    x++; //x = x + 1 (postfix)
    std::cout << "x++: " << x << std::endl; //print current value of x

    --x; //x = x - 1 (prefix)
    x--; //x = x - 1 (postfix)

    //definition of a bool type variable
    //value is true(1) or false(0)
    bool t = 1 < 6;
    std::cout << "t: " << t << std::endl; //print current value of t
    bool s = (1 < 6) && (2 > 3);
    std::cout << "s: " << s << std::endl; //print current value of t

    return 0;
}