#include<iostream>

//Helper function
void blowUpWorld()
{
    std::cout << "Boom!\n";
}



int main()
{
    //=============================================
    //Conditional Logic Errors

    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    // oops, we used operator >= instead of operator >
    if (x >= 5) 
    std::cout << x << " is greater than 5\n";
    
    // oops, we used operator> instead of operator<
    for (int count = 1; count > x; ++count)
    {
        std::cout << count << ' ';
    }


    //=============================================
    //Infinite Loops
    
    /*
    int count = 1;
    while (count <= 10) // this condition will never be false
    {
        std::cout << count << ' '; // so this line will repeatedly execute
    }
    std::cout << '\n'; // this line will never execute
    */
    
    /*
    int count = 1;
    for (unsigned int count = 5; count >= 0; --count)
    {
        if (count == 0)
            std::cout << "blastoff! ";
        else
          std::cout << count << ' ';
    }

    std::cout << '\n'; // this line will never execute
    */

    //=============================================
    //Incorrect Operator Precedence
    x = 5;
    int y{ 7 };

    // oops: operator precedence issue
    if (!x > y)  // this statement is equivalent to (!x) > y
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';

    
    //=============================================
    //Precision Issues with Floating Point Types
    // should sum to 1.0
    double d{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; 

    if (d == 1.0)
        std::cout << "equal \n";
    else
        std::cout << "not equal \n";

    //=============================================
    //Accidental Null Statements
    std::cout << "Should we blow up the world again? (y/n): ";
    char c{};
    std::cin >> c;

    // accidental null statement here
    if (c=='y'); 
        // so this will always execute since it's not part of the if-statement
        blowUpWorld(); 

    //=============================================
    //Not using a compound statement when one is required
    // accidental null statement here
    if (c=='y')
	 std::cout << "Okay, here we go...\n"; 
        // so this will always execute since it's not part of the if-statement
        blowUpWorld(); 


    return 0;
}