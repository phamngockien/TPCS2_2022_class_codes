#include <iostream>

class Point {

public:
   Point(double x, double y) : x(x), y(y){}
   void print(){ std::cout << "(" << x << ", " << y << ")\n";}
private:
  double x,y; 
};

int main()
{
  Point A(1.2,2.2); //create a point A with its position.
  A.print();
  return 0;
}
