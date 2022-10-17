#include <iostream>

// Base class
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

// Derived class
// Syntax:
// class [devrived class name] : [access specifier] [Base class name]
class Rectangle: public Shape {
   public:
      int getArea() { 
         //width and height are derived from the Base
         return (width * height); 
      }
};


int main() {
   Rectangle Rect;
   
   // As Rectangle is a child of Shape,
   // public member functions in Shape can be called
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   std::cout << "Total area: " << Rect.getArea() << std::endl;

   return 0;
}