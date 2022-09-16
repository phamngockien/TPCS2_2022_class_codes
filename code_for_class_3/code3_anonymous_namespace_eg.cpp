#include <iostream>

namespace // unnamed/anonymous namespace
{
    void print(auto i) // can only be accessed in this file
    {
        std::cout << "the value is: " << i << std::endl;
    }

    int c = 2;
}

int main()
{
    print(1); // we can call print() without a namespace prefix

    std::cout<<"Now print the c variable in the namespace \n";
    print(c);

    return 0;
}
