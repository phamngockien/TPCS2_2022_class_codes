#include<iostream>

class Cascading {
public:
   Cascading& func1(){
        std::cout << "func1 called\n";
        return *this;
   }
   Cascading& func2(){
        std::cout << "func2 called\n";
        return *this;
   }
};
int main()
{
  Cascading demo;
  demo.func1(); demo.func2();
  demo.func1().func2();  //because the functions return the demo obj
  return 0;
}
