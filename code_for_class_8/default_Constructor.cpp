#include <iostream>

class Point {

public: 
  double x,y;
  void print(){
     std::cout << "(" << x << ", " << y << ")\n";  
  
  }

};


int main()
{

  Point A;
  A.print();

  std::cout << A.x << "\n";

  return 0;
}
