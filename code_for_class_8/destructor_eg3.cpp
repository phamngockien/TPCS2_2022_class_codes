#include<iostream>

class Point {

public:
   Point(double x, double y){ // Constructor definition
      this->x = x; this->y = y;
   }
   ~Point(){delete z;}//Destructor
private:
  double x,y;
  int *z = new int(4); //will not be cleared by Destructor
};

int main()
{
  Point A(1.2,2.2); //create a point A with its position.
  return 0;
}
