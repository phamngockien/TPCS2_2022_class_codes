#include<iostream>


class Box {
   public:
      static int objectCount;

      static void print(){}
  
      // Constructor definition
      Box(double l = 2.0 , double b = 2.0, double h = 2.0) {
         length = l;
         breadth = b;
         height = h;
         
         // Increase every time object is created
         ++objectCount;
      }
      double Volume() {
         return length * breadth * height;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};



// Initialize static member of class Box
int Box::objectCount = 0;  //access by the scope resolution operator (::)



int main(void) {
   Box::print();
   
   Box Box1;    // Initialize box1
   Box Box2(8.5, 6.0, 2.0);    // Initialize box2
   // Print total number of objects.
   std::cout << "Total objects: " << Box::objectCount << std::endl;

   //print the volume of 2 objects
   std::cout << "Box1’s volume: " << Box1.Volume() << std::endl;
   std::cout << "Box2’s volume: " << Box2.Volume() << std::endl;

   return 0;
}
