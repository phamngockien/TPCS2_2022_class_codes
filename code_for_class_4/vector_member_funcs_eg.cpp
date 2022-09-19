/*
    Some member functions of the vector object.
*/


#include <vector>
#include <iostream> 


//helper function to print elements of a vector
void print_vec(auto &vec)
{
    for (auto e : vec) std::cout << e << "\t";

    std::cout << std::endl;
}


int main()
{
    // initiallizing a vector of doubles with the values of each element.
    std::vector<double> x{0.0, 0.25, 0.5, 0.75, 1.0};

    // get the size of the vector x
    std::cout << "The vector x has " << x.size() << " elements\n";
    print_vec(x);

    // resize the vector x
    // if bigger than current fills with 0
    x.resize(7);
    std::cout << "Vector x after resizing:\n";
    print_vec(x);

    //reseve memory for a vector, but doesn't change the size
    x.reserve(9);
    std::cout << "After reservation for maximum 9 elements, the vector x has the size of: " << x.size() << "\n";
    std::cout << "Capacity of the vector x is: " << x.capacity() << "\n";
    std::cout << "Vector x after reserving:\n";
    print_vec(x);
    
    //increases the size of the vector by 1, and puts the thing at the end
    x.push_back(3.2);
    std::cout << "After using push_back, the vector x has the size of: " << x.size() << "\n";
    std::cout << "Vector x after using push_back:\n";
    print_vec(x);

    //clear the contents of vector x
    x.clear();
    std::cout << "After clearing, the vector x has the size of: " << x.size() << "\n";
    //check if vector x is empty now
    std::cout << "Is vector x empty? " << x.empty() << "\n";   
    std::cout << "Vector x after clearing:\n";
    print_vec(x);

    return 0;
}