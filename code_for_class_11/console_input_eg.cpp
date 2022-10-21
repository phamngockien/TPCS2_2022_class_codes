#include<iostream>

//Helper function
//Display the guideline for further computation
void print_UI()
{
    std::cout << "Please enter the number relating to your action: \n";
    std::cout << "[1] Adding numbers \n";
    std::cout << "[2] Substracting numbers \n";
    std::cout << "[3] Multiplying numbers \n";
    std::cout << "[4] Dividing numbers \n";

}

//Function to return the result w.r.t the input option
double computation(const int&option,
                   const double& a, 
                   const double& b)
{
    switch (option)
    {
    case 1:
        std::cout << "Adding ... \n";
        return a + b;
        break;
    case 2:
        std::cout << "Substracting ... \n";
        return a - b;
        break;
    case 3:
        std::cout << "Multiplying ... \n";
        return a * b;
        break;
    case 4:
        std::cout << "Dividing ... \n";
        return a / b;
        break;
    default:
        std::cout << "\nYou chose to do nothing, neglect the following result!\n";
        return 1;
        break;
    }

}

int main()
{
    print_UI();

    int option;
    std::cin >> option; // Read the option from terminal

    double a,b;
    std::cout << "\nPlease input two numbers for the computation:\n";
    std::cin >> a >> b; // Read two numbers a and b from terminal

    std::cout << computation(option, a, b) << "\n"; 

    return 0;
}