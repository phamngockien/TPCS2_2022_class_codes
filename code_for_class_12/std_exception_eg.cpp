#include <cstddef> // for std::size_t
#include <exception> // for std::exception
#include <iostream>
#include <limits>
#include <string> // for this example

int main()
{
    try
    {
        // Your code using standard library goes here
        // We'll trigger one of these exceptions intentionally for the sake of the example
        std::string s;
        s.resize(std::numeric_limits<std::size_t>::max()); // will trigger a std::length_error or allocation exception
    }

    // This handler will catch std::length_error (and any exceptions derived from it) here
    /*catch (const std::length_error& exception)
    {
        std::cerr << "You ran out of memory!" << '\n';
    }
    */

    // This handler will catch std::exception and all the derived exceptions too
    catch (const std::exception& exception)
    {
        std::cerr << "Standard exception: " << exception.what() << '\n';
    }

    return 0;
}