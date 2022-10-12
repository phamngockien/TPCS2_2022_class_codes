#include<iostream>

class A {
    public:
    A(){}   //User-defined default constructor
    int i;
    int j;
};

class B {
    public:
    B() = default; //Non user-defined default constructor
    int i;
    int j;
};

int main()
{
    for( unsigned int i = 0; i < 10; ++i) {
        std::cout << "Call No: " << i+1 << std::endl;
        A* pa = new A();
        B* pb = new B();
        std::cout << pa->i << "," << pa->j << std::endl;
        std::cout << pb->i << "," << pb->j << std::endl;
        delete pa;
        delete pb;
    }
  return 0;
}
