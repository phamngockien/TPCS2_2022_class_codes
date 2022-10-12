#include<iostream>

class Rectangle{
public:
   void set_prms(double a, double b)
   { this->a = a; this->b = b;
      circumference = 2.*(a+b);
      area = a*b;
   }
private:
   double a,b; //side lengths
   double circumference;
   double area;
   friend class Util; //Hey add this class as your friend!
};

class Util{
public:
    void print_prms(Rectangle rec) {std::cout<<"area: " << rec.area << "\n"; }
};


int main()
{
    Rectangle rec; rec.set_prms(10.,10.);
    Util util; util.print_prms(rec);
    return 0;
}
