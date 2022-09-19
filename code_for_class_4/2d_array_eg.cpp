/*
    Example of 2D array (C-style)
*/

#include <iostream>

// Helper function
// To print out the 2D array
void printArray2D(int* list, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << list[i * col + j] << " ";
        }
        std::cout << std::endl;
    }
}

#include <iostream>

int main()
{
    //multidimensional array
    int height = 3; int width = 5;
    int my_arr [height][width];

    for (int n = 0; n < height; ++n)
    {
        for (int m = 0; m < width; ++m)
        {
            my_arr[n][m] = (n+1)*(m+1);
        }
    }

    // Display the 2D array
    printArray2D((int*)my_arr, height,width);

    return 0;
}