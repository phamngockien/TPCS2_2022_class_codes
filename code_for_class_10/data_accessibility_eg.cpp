#include<iostream>

class A {
public:
    int x = 1;
 
protected:
    int y = 2;
 
private: // inaccessible in the derived classes
    int z = 3;

public:
  void print_data()
    {
        
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n"; 
        std::cout << "z: " << z << "\n";  
    }
};
 
class B : public A {
    // x is public
    // y is protected
    // z is not accessible from B

public:
    void print_data()
    {
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n"; 
        // Inaccessible
        //std::cout << "z: " << z << "\n";  
    }
};
 
class C : protected A {
    // x is protected
    // y is protected
    // z is not accessible from C

public:
    void print_data()
    {
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n"; 
        // Inaccessible
        //std::cout << "z: " << z << "\n";  
    }
};
 
class D : private A // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D

    public:
    void print_data()
    {
        std::cout << "x: " << x << "\n";
        std::cout << "y: " << y << "\n"; 
        // Inaccessible
        //std::cout << "z: " << z << "\n";  
    }
};

int main()
{
    A a;
    std::cout << "base data:\n";
    a.print_data();

    B child_b;
    child_b.x;
    //child_b.y; child_b.z; inaccessible
    std::cout << "\nchild b data (public inheritted):\n";
    child_b.print_data();

    C child_c;
    // Inaccessible
    //child_c.x; child_c.y; child_c.x; 
    std::cout << "\nchild c data (protected inheritted):\n";
    child_c.print_data();

    D child_d;
    // Inaccessible
    //child_d.x; child_d.y; child_d.z;
    std::cout << "\nchild d data (private inheritted):\n";
    child_d.print_data();
}