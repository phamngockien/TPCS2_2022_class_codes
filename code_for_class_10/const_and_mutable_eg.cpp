#include<iostream>

struct Thing {
    int a = 0; //default value is zero

    mutable int num_calls = 0;
    
    Thing(int val) { a = val; }; //Constructor

    int get_val() const  //const member function: cannot change data 
    { 
        ++num_calls; //can change num_calls as it is mutable
        return a; 
    }
    
    void set_val(int val) //non-const member function: can change data
    { a = val; }
};

int main()
{
    Thing t(2);
    std::cout << "a: " <<  t.a << std::endl;

    std::cout << "\nCall non-const member function ...\n";
    t.set_val(3);
    std::cout << "a: " <<  t.a << std::endl;

    //Call the const member function 4 times
    for (unsigned int i = 0; i < 4; ++i)
         t.get_val();
     
    std::cout << "\nCalled const member function " << t.num_calls << " times\n";
    
    return 0;
}
