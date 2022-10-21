#include<iostream>
#include<string>

int main()
{
    // String Declaration
    std::string my_string;

    std::cout << "Please input a string:\n";
    // Console input using getline()
    std::getline(std::cin, my_string);

    // Console output
    std::cout << "\nYour input string is:\n";
    std::cout << my_string << std::endl;

    // Insert a character at the end
    my_string.push_back('s');
    std::cout << "\nYour string after appending a character 's' to the end is:\n";
    std::cout << my_string << std::endl;

    // Delete a character at the end
    my_string.pop_back();
    std::cout << "\nYour string after removing the last character is:\n";
    std::cout << my_string << std::endl;

    std::cout << "\n###########################################################\n";
    // Initalizing a string
    std::string class_name = "Theory and Practice in Computational Sciences 2";
    std::cout << "\nThe string is:\n";
    std::cout << class_name << std::endl;

    // Resizing a string
    class_name.resize(6);
    std::cout << "\nThe string after resizing to 6 characters is:\n";
    std::cout << class_name << std::endl;

    // Capacity of a string
    std::cout << "\nThe capacity of the string is:\n";
    std::cout << class_name.capacity() << std::endl;

    // Length of a string
    std::cout << "\nThe length of the string is:\n";
    std::cout << class_name.length() << std::endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    class_name.shrink_to_fit();
    std::cout << "\nThe new capacity of the string after shrinking is:\n";
    std::cout << class_name.capacity() << std::endl;

    // Forward Iterator
    std::string::iterator it;
    // Display the string by a loop using the forward iterator
    std::cout << "\nDisplay the string by forward iterator:\n";
    for (it = class_name.begin(); it != class_name.end(); ++it) std::cout << *it;
        std::cout << std::endl;

    // Reverse Iterator
    std::string::reverse_iterator rit;
    // Display the string by a loop using the reverse iterator
    std::cout << "\nDisplay the string by reverse iterator:\n";
    for (rit = class_name.rbegin(); rit != class_name.rend(); ++rit) std::cout << *rit;
        std::cout << std::endl;

    
    std::cout << "\n###########################################################\n";
    std::string a = "Hello, ";
    std::string b = "this is an example. ";
    std::cout << "\nFirst string is:\n";
    std::cout << a << std::endl;
    std::cout << "\nSecond string is:\n";
    std::cout << b << std::endl;

    // Concatenation a and b
    std::string c = a + b; 
    std::cout << "\nc = a + b:\n";
    std::cout << c << std::endl;

    // Concatenation c with a temporary string
    c += "It's simple";
    std::cout << "\n c += It's simple:\n";
    std::cout << c << std::endl;

    // Swapping a and b
    a.swap(b);
    std::cout << "\nAfter swapping the first and the second strings:\n";
    std::cout << "\nFirst string is:\n";
    std::cout << a << std::endl;
    std::cout << "\nSecond string is:\n";
    std::cout << b << std::endl;
    
    return 0;
}