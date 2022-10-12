#include<iostream>

class Point {
public:
    Point(){}   //default constructor

    Point(int x1, int y1) //parameterized constructor
    {
        x = x1; y = y1;
    }

    Point(const Point& p1)   // Copy constructor
    {
        x = p1.x; y = p1.y;
    }

    int getX() { return x; }
    int getY() { return y; }

private:
    int x, y;
};

int main()
{
    Point p1(10, 15); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here
    Point p; 

    std::cout << "Point p1: (" << p1.getX() << ", " << p1.getY() << ")\n";
    std::cout << "Point p2: (" << p2.getX() << ", " << p2.getY() << ")\n";

    std::cout << "Point p: (" << p.getX() << ", " << p.getY() << ")\n";
    return 0;	
}
