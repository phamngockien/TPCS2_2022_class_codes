#include <iostream>


int main()
{
    int x = 0;

    // capture x by copy
    // Thus, x is copied at when we define lambda function
    auto print_old_x = [x](){ std::cout << "old x: " << x << std::endl; };

    // capture x by copy reference 
    auto print_new_x = [&x](){ std::cout << "new x: " << x << std::endl; };
    
    //Now we call the two lamda functions for printing 
    x = 6; //change the values of x
    print_old_x();
    print_new_x(); 

    //===============================================================================
    //Initialize capture in lamda function definition
    auto f = [i=1](){std::cout << "\n\ni is created in capture field = " << i << std::endl;};
    //Call this function
    f();
    // Question: Does variable i still exist here?

    //===============================================================================
    //Mutable in lamda function definition
    double length = 5.0, width = 4.0;
    double area;

    auto update_area =
        [&area, &length, &width]() mutable
        {
            area = length * width;
        };
    
    //call lambda function
    update_area(); //now the area is initialized

    std::cout << "\n\nlength, width, area: " << length << ", " << width << ", " << area << std::endl;

    return 0;
}