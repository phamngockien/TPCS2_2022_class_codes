#include <vector> //header for std::vector
#include <iostream>

//helper function to print elements of a vector
void print_vec(auto &vec)
{
    for (auto v : vec) std::cout << v << "\t";

    std::cout << std::endl;
}


int main() 
{
    int size = 5;

    // initiallizing a vector of doubles with the values of each element.
    std::vector<double> x{0.0, 0.25, 0.5, 0.75, 1.0};

    // create a vector y of doubles which has the same size as vector x
    // The default elements of vector y are zeros.
    std::vector<double> y(x.size());

    // A loop to initialize the values of the elements of y
    for (int i = 0; i < size; ++i) {
        y[i] = 1 - 2.0*x[i];
    }

    // create an empty vector (zero elts)
    std::vector<double> emp_vec;

    // Disp. vector x
    std::cout << "The vector x has " << x.size() << " elements\n";
    std::cout << "In which the elements are:\n";
    print_vec(x); 

    return 0;
}