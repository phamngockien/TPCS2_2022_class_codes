#include<iostream>

class Point {
public:
    Point(int x1, int y1) : x(x1), y(y1) {}   //User-defined default constructor
    Point(const Point& p) {x = p.x; y = p.y;} //Copy constructor
    int getX(){return x;}
    int getY(){return y;}
private:
    int x, y;
};

int main()
{
  Point p1(1, 3); // Call default constructor
  Point p2 = p1; // Call copy constructor - Option 1
  Point p3(p2); // Call copy constructor - Option 2

  // Let us access values assigned by constructors
    std::cout << "p1.x = " << p1.getX()
         << ", p1.y = " << p1.getY();
    std::cout << "\np2.x = " << p2.getX()
         << ", p2.y = " << p2.getY();
    std::cout << "\np3.x = " << p3.getX()
         << ", p3.y = " << p3.getY() << std::endl;
   
    return 0;
}
