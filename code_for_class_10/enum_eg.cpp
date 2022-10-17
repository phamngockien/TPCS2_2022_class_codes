#include<iostream>

//#######################################################
//Two plain enums examples
enum HairColor {
    //each member is a static int
    //Default values are: 
    Black, Blue, Brown, Others 
    //0     1      2      3   
};

enum Direction { 
    //We can also set the value as
    NORTH=1, SOUTH=2, EAST=4, WEST=8 
};

void getHairdetails(int hair_color)
{
    switch (hair_color)
    {
    case Black:
        std::cout << "Black hair is popular in Asia!\n";
        break;
    case Blue:
        std::cout << "Blue hair is rare!\n";
        break;
    case Brown:
        std::cout << "Brown hair is pretty beautiful\n";
        break;
    case Others:
        std::cout << "You have other hair color than Black, Blue, Brown.\n";
        break;    
    default:
        std::cout << "Your hair color is not in the enumeration list.\n";
        break;
    }
}

//#######################################################
//Enum class example
enum class Colors 
{
    //each member is a static variable of type Colors
    //so we can access by scope resolution, eg. Colors::RED
    RED, GREEN, BLUE, BROWN, WHITE, GRAY, OTHERS
};

void getColors(Colors color)
{
    switch (color)
    {
    case Colors::RED: //you cannot use RED here because of type protection
        std::cout << "RED\n";
        break;
    
    default: 
        std::cout << "other color than RED\n";
        break;
    }

}

//#######################################################
int main()
{
    HairColor my_hair = Black;
    std::cout<< "Black Hair is represented by: " << Black << "\n";

    //We can iterate by
    for (int i = Black; i < Others; ++i) std::cout << i << "\n";

    Direction my_dir = EAST;
    std::cout<< "East direction is represented by: " << EAST << "\n";

    //Eg. use enumerator as input of a function
    int userInput;
    std::cout << "please input your hair color: ";
    std::cin >> userInput;
    my_hair = (HairColor) userInput;
    getHairdetails(my_hair);

    //---------------------------------------------------------------------
    Colors my_color;
    my_color = Colors::BLUE;
    // you cannot print my_color because it is of type Colors (type protection)
    //std::cout<< "BLUE is represented by: " << my_color << "\n";
    
    //Eg. use enumerator class as input of a function
    getColors(my_color);
    
    //We cannot iterate by
    //for (int i = Color::RED; i < Color::OTHERS; ++i) std::cout << i << "\n";

    return 0;
}