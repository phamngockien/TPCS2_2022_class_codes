#include<iostream>

//Handling error in function
void printDivision(int x, int y)
{
    if (y != 0)
        std::cout << static_cast<double>(x) / y;
    else
        std::cerr << "Error: Could not divide by zero\n";
}


//Fatal Error
double doDivision(int x, int y)
{
    if (y == 0)
    {
        std::cerr << "Fatal Error: Could not divide by zero\n";
        std::exit(1);
    }
    return static_cast<double>(x) / y;
}

int main()
{
    printDivision(1,0);
    doDivision(1,0);
    
    return 0;
}