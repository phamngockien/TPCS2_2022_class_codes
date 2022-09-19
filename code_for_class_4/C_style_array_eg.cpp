#include <iostream>

//helper function
//To print the element of a C-style array
void print_arr(int size, auto array)
{
    for (unsigned int i = 0; i < size; ++i)
        std::cout << array[i] << "\t";

    std::cout << std::endl;
}



int main()
{
    // type name [element]
    int my_arr [5];
    std::cout << "elements of an uninitiallized array are: \n";
    print_arr(5,my_arr);
    std::cout << std::endl;
    
    //Initializing array
    int my_arr_1 [5] = {1,2,3,4,5};
    
    //The last two elements are zeros
    int arr_1 [5] = {1,2,3};
    std::cout << "elements of arr_1 array are: \n";
    print_arr(5,arr_1);
    std::cout << std::endl;
    
    //All elements are zeros
    int arr_2 [5] = {};
    std::cout << "elements of arr_2 array are: \n";
    print_arr(5,arr_2);
    std::cout << std::endl;
    
    //Automatically size is set by compiler
    int arr_3 [] = {1,2,3,4,5,6};
    
    //These statements are equivalent
    int arr_4[] = {2,3,4};
    //int arr_4[] {2,3,4};

    //set the value of element at index 2
    my_arr [2] = 6;
    //Copy the third element of my_arr to x
    int x = my_arr[2];

    return 0;
}