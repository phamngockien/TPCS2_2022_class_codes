#include<iostream>

// Base class Shape
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Base class PaintCost
class PaintCost {
   public:
      int getCost(int area) {
        //eg. 70$ per square meter
         return area * 70;
      }
};

// Derived class
// Syntax:
// class [devrived class name] : [access specifier 1] [Base class name 1], [access specifier 2] [Base class name 2]
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height); 
      }
};

int main() {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   area = Rect.getArea();
   
   // Print the area of the object.
   std::cout << "Total area: " << Rect.getArea() << std::endl;

   // Print the total cost of painting
   std::cout << "Total paint cost: $" << Rect.getCost(area) << std::endl;

   return 0;
}