#include<iostream>

int multiple(const int &x, 
                    const int &y) 
{
  return x*y;
}

int main()
{
    std::cout << "100000*200000 = " << multiple(100000,200000) << std::endl;
    return 0;
}
