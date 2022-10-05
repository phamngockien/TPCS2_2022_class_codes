#include <iostream>

class Point {

public:
   Point(double x, double y){
      this->x = x;
      this->y = y;
   }
   void print(){ std::cout << "(" << x << ", " << y << ")\n";}
private:
  double x,y; 
};

int main()
{
  Point A(1.2,2.3);
  A.print();
  return 0;
}
