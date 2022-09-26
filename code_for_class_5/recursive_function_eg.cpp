#include <iostream>

int recursion (int x)
{
    if (x<2) {
	  return 1;
    } else {
        //here this function is called again
        return x*recursion(x-1);
    }
}

int main()
{
    int x= 5;
    std::cout << x << "! = " << recursion(x) << "\n";
    return 0;
}