#include<iostream> //stream objects for input/output

//function prototype
//Syntax:
// return_type function_name (input variables)
// Always ends with a semicolon ";"
//int square(int num);

//function definition
int square(int num)
{
    //Here we define what does this function do
    return num * num; //return the result
}

int main()
{
    int a; //Declaration of an integer
    std::cout << "Please input an integer:\n";
    std::cin >> a; //get the value of a from terminal input

    std::cout << "The square of the input integer is:\t";
    //Call function square and print the returned value 
    std::cout << square(a) << std::endl;

    return 0; //return a value for the main function
}