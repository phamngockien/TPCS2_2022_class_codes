#include <vector>
#include <iostream>

/*
This example illustrates passing by reference

*/

// A pass by reference eg
double sum_square_1(std::vector<double> &x, 
                    std::vector<double> &y)
{
  double sum = 0.0; 
  
  for (int i = 0; i < x.size(); ++i) {
    //sum += x[i]*x[i] + y[i]*y[i];
    // The code in this loop will change the value of x, y
    // but the return value is the same as the commented code above
    x[i] *= x[i];
    y[i] *= y[i];
    sum += x[i] + y[i]; 
  }
  return sum;
}

// A pass by const reference eg
double sum_square_2(const std::vector<double> &x, 
                    const std::vector<double> &y) 
{
  double sum = 0.0; 

  for (int i = 0; i < x.size(); ++i) {
 	sum += x[i]*x[i] + y[i]*y[i];
  }
  return sum;
}

//helper function to print out the vector
void print_vec(const std::vector<double>& vec)
{
    for (auto v : vec) std::cout << v << "  ";

    std::cout << std::endl;
}



int main()
{

    std::vector<double> x = {1.,2.,3.,4.};
    std::vector<double> y = x;
    std::cout << "vector x: ";
    print_vec(x);
    std::cout << "vector y: ";
    print_vec(y);
  
    std::cout << "\n\nIf we pass by const ref inputs, the sum squares of 2 vectors is:\n";
    std::cout << sum_square_2(x, y) << std::endl;
    std::cout << "vector x: ";
    print_vec(x);
    std::cout << "vector y: ";
    print_vec(y);

    std::cout << "\n\nIf we pass by ref inputs, the sum squares of 2 vectors is:\n";
    std::cout << sum_square_1(x, y) << std::endl;
    std::cout << "vector x: ";
    print_vec(x);
    std::cout << "vector y: ";
    print_vec(y);

    return 0;
}