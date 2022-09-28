#include <vector>
double sum_squares(const std::vector<double> &x, 
                                 const std::vector<double> &y) 
{
  double sum = 0.0;
  
  for (unsigned int i = 0; i < x.size(); ++i) {
 	sum += x[i]*x[i] + y[i]*y[i];
  }
  return sum;
}

int main()
{
    sum_squares({1,2},{1,2});
    return 0;
}