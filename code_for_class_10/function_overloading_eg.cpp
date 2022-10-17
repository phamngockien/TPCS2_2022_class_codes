#include<iostream>
#include<vector>

class Foo
{
public:
    //print an int
    void print(const int& x)
    {
        std::cout << "print an int: ";
        std::cout << x << std::endl;
    }   

    //print a double
    void print(const double& x)
    {
        std::cout << "print a double: ";
        std::cout << x << std::endl;
    }

    //print a vector of ints
    void print(const std::vector<int>& vec)
    {
        std::cout << "print a vector of ints: ";
        for (auto v : vec) std::cout << v << " ";
        std::cout << std::endl;
    }

    //print a vector of doubles
    void print(const std::vector<double>& vec)
    {
        std::cout << "print a vector of double: ";
        for (auto v : vec) std::cout << v << " ";
        std::cout << std::endl;
    }
};

int main()
{
    Foo foo;
    
    int x = 1;
    foo.print(x);

    double y = 2;
    foo.print(y);

    std::vector<int> int_vec{1,2,3,4};
    foo.print(int_vec);

    std::vector<double> d_vec{1.2,1.5,1.7};
    foo.print(d_vec);
}