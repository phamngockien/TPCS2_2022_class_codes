#ifndef HISTORY_H
#define HISTORY_H

class Point {
public:
    Point(int x1, int y1);  //User-defined default constructor
    Point(const Point& p); //Copy constructor
    int getX();
    int getY();
private:
    int x, y;
};

#endif