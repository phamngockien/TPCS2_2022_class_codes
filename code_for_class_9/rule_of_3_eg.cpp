#include<iostream>

class Foo
{
private:
    int* p;
    int size;
public:
    Foo(int s , int f) //User-defined Constructor
    {  
        std::cout << "User-defined Constructor called!\n";
	size = s;
        p = new int[size];
        for (unsigned int i = 0; i < size; ++i) p[i] = f;
    }
     
    ~Foo()
    {
       delete [] p;
       std::cout << "Destructor called!\n";
    } //Destructor
    
    Foo(const Foo& other) // Copy Constructor
    {  
	size = other.size;
        p = new int[size];
        for (unsigned int i = 0; i < size; ++i) p[i] = other.p[i];
	std::cout << "Copy Constructor called!\n";
    }
    
   
    //Comment out this function then the assignment f1 = f2 will return an error!
    Foo& operator=(const Foo& other) // copy assignment operator
    //allow f1 = f2 = f3 = f4   
    {  
	if (this == &other) return *this;
        
	if (size == other.size)
        {
           for (unsigned int i = 0; i < other.size; ++i) p[i] = other.p[i];
        } else 
	{
	   std::cout << "Error! : two object do not have the same data size!\n ";
        }
	
	std::cout << "Copy Assignment Operator called!\n";

	return *this;
    }  

    void print() const
    {
       for (unsigned int i = 0; i < size; ++i) std::cout << p[i] << " ";
       std::cout << std::endl;
    }
};


int main()
{
   Foo f1(3, 9); // Call default Constructor
   std::cout << "First Object f1:\n";
   f1.print();

   Foo f2(f1); // Call Copy Constructor
   std::cout << "Object f2:\n";
   f2.print();
	   
   Foo f3 = f2; // Call Copy Constructor because f3 is a newly created Object.
   std::cout << "Object f3:\n";
   f3.print();


   Foo f4(3,1);
   std::cout << "Object f4:\n";
   f4.print();

   f4 = f1; // Call Copy assignment operator
   std::cout << "set f4 = f1, f4:\n";
   f4.print();

   return 0;

}
