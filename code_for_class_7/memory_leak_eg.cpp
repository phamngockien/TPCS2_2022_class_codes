#include <iostream>

double* calc(int res_size, int max) // leaks memory
{
    double* p = new double[max];
    double* res = new double[res_size];
    
    // use p to calculate results to be put in res
    /*
        .............
    */

    // To fix memory leak
    //delete[] p; //we don't need that memory anymore: free it

    return res;
}


int main()
{
    //this call of calc leaks 100 doubles unusable for the rest of the program
    double* r = calc(100,1000);

    // To fix memory leak
    //delete[] r; //we don't need that memory anymore: free it
    
    return 0;
}