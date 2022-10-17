#include<iostream>

class Foo {

public:
   //User-defined Constructor
   Foo(const int& size) 
   : array(new int[size]{0}), size(size) 
   {
      std::cout<< "User defined constructor called\n";
   }

   //Destructor
   ~Foo() 
   {
      if (array) delete []array;
   } 

   // Copy Constructor 
   // Point p(other_p); where other_p is a Point
   // equivalent to: Point p = other_p
   Foo(const Foo& rhs) 
   {
      array = new int[size];
      size = rhs.size;

      for (int i = 0; i < size; ++i) array[i] = rhs.array[i];
      std::cout<< "Copy constructor called\n";
   }

   //Copy Assignment
   //An operator overload
   //p1 = p2
   Foo& operator=(const Foo& rhs) 
   {
      if (this == &rhs) return *this; //same address check

      if (array) delete []array;

      //deep copy
      size = rhs.size;
      array = new int[size];
      for (unsigned int i = 0; i < size; ++i) array[i] = rhs.array[i];


      std::cout<< "Copy operator= called\n";
      return *this;
   }

   
   //Uncomment this block to see the efficiency of the move assignment
   //Move Constructor
   // Deal with temporary object (r-value)
   Foo(Foo&& rhs) noexcept //Keyword noexcept: do not allow any exception
   {
      // Shift the resource without creating copy
      size = rhs.size;
      array = rhs.array;
      rhs.array = nullptr;
      std::cout<< "Move constructor called\n";
   }

   //Move Assignment
   Foo& operator=(Foo&& rhs) noexcept
   {
      size = rhs.size;
      array = rhs.array;
      rhs.array = nullptr;
      std::cout<< "Move operator= called\n";
      return *this;
   }
   

   //f + g; cause an r-value to be created
   Foo operator+(const Foo& rhs)
   {
      Foo temp(size + rhs.size);

      for (unsigned int i = 0; i < size; ++i) temp[i] = array[i];

      for (unsigned int k = 0; k < rhs.size; ++k) temp[k+size] = rhs.array[k];

      return temp;

   }

   //function to return the element i of array
   // e.g, Foo obj(1); obj[i]; 
   int& operator[](const int& i) {return array[i];}

   //get the size of the array
   int length() const {return size;}

   //display function
   friend std::ostream& operator<<(std::ostream& o, const Foo& foo)
   {
      for (unsigned int i = 0; i < foo.size; ++i) 
         o << foo.array[i] << " ";
      
      return o;
   }

private:
  int* array;
  unsigned int size;
};



int main()
{
   Foo f(100000);

   //Initialize the data for f
   for (unsigned int i = 0; i < 5; ++i)
      f[i] = 3*i;

   //std::cout << f << std::endl;

   Foo g(f);
   //std::cout << g << std::endl;

   Foo h(3);
   //std::cout << h << std::endl;

   h = f + g;
   //std::cout << h << std::endl;


   return 0; 
}