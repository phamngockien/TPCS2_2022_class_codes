#include<iostream>
#include <memory>

class Point {

public:
   Point(double x, double y){ // Constructor definition
      this->x = x; this->y = y; std::cout << "variables created\n"; 
   }
   ~Point(){std::cout << "variables cleared\n";}//Destructor
private:  
  double x,y;
  int *z = new int(4); 
};

int main()
{
  Point A(1.2,2.2); //create a point A with its position.
  return 0;
}
